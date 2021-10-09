/*
 * Driver for Microchip Technology Inc. 23LC (23LCV) SPI SRAM chips for
 * AVR, SAM3X (Due), and SAM M0+ (SAMD, SAML, SAMC) microcontrollers
 * 
 * Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev 
 * 
 * Copyright (c) 2017, Justin Mattair (justin@mattair.net)
 * 
 * Permission to use, copy, modify, and distribute this software
 * and its documentation for any purpose and without fee is hereby
 * granted, provided that the above copyright notice appear in all
 * copies and that both that the copyright notice and this
 * permission notice and warranty disclaimer appear in supporting
 * documentation, and that the name of the author not be used in
 * advertising or publicity pertaining to distribution of the
 * software without specific, written prior permission.
 *
 * The author disclaim all warranties with regard to this
 * software, including all implied warranties of merchantability
 * and fitness.  In no event shall the author be liable for any
 * special, indirect or consequential damages or any damages
 * whatsoever resulting from loss of use, data or profits, whether
 * in an action of contract, negligence or other tortious action,
 * arising out of or in connection with the use or performance of
 * this software.
 */

#include "Arduino.h"
#include "SPI.h"
#include "SRAM_23LC.h"
#include "pico/stdlib.h"

// SPI bus can be SPI, SPI1 (if present), etc.
#define SPI_PERIPHERAL		SPI
#define CHIP_SELECT_PIN		20

/* Device can be:
 * 128KB: SRAM_23LCV1024, SRAM_23LC1024, SRAM_23A1024
 * 64KB: SRAM_23LCV512, SRAM_23LC512, SRAM_23A512
 * 32KB: SRAM_23A256, SRAM_23K256
 * 8KB: SRAM_23A640, SRAM_23K640
 */
//SRAM_23LC SRAM(&SPI_PERIPHERAL, CHIP_SELECT_PIN, SRAM_23LCV1024);
SRAM_23LC SRAM(&SPI_PERIPHERAL, CHIP_SELECT_PIN, SRAM_23K256);

// Additional SRAM chips
// SRAM_23LC SRAM1(&SPI_PERIPHERAL1, CHIP_SELECT_PIN1, SRAM_23LC512);

#define START_ADDRESS   250

//uint8_t buffer[BUFFER_SIZE];
//#define BUFFER_SIZE  320

char write_buffer[] = "The MattairTech MT-D21E is a development board.";
#define BUFFER_SIZE  (sizeof(write_buffer) / sizeof(uint8_t))
char read_buffer[BUFFER_SIZE];

void setup(void)
{
  /* Without parameters, begin() uses the default speed for this
   * library (12MHz for samd, 14MHz for sam, and 4MHz for avr).
   * Note that SPI transaction support is required.
   */
  SRAM.begin();
  //SRAM.begin(8000000UL);      // or specify speed

  //Serial.begin(9600);
}

void loop(void)
{
  while (!Serial); // Wait for serial monitor to connect

  // Print buffer to serial monitor
  Serial.print("Write Block: ");
  for (size_t i=0; i < BUFFER_SIZE; i++) {
    Serial.write(write_buffer[i]);
  }
  Serial.println();

  // Write block
  if (!SRAM.writeBlock(START_ADDRESS, BUFFER_SIZE, write_buffer)) {
    Serial.println("Write Block Failure");
  }

  // Clear buffers
  memset(&read_buffer[0], 0xAA, BUFFER_SIZE);
  memset(&write_buffer[0], 0x00, BUFFER_SIZE);

  // Read Byte, print to serial monitor
  Serial.print("Read Byte:  ");
  for (size_t i=0; i < BUFFER_SIZE; i++) {
    read_buffer[i] = SRAM.readByte(START_ADDRESS + i);
    Serial.write(read_buffer[i]);
  }
  Serial.println();

  strcpy(write_buffer, "Hello World!");

  // Write Byte, print to serial monitor
  Serial.print("Write Byte:  ");
  for (size_t i=0; i < BUFFER_SIZE; i++) {
    Serial.write(write_buffer[i]);
    SRAM.writeByte(START_ADDRESS + i, write_buffer[i]);
  }
  Serial.println();

  memset(&read_buffer[0], 0xBB, BUFFER_SIZE);
  memset(&write_buffer[0], 0xFF, BUFFER_SIZE);

  // Read block
  Serial.print("Read Block:  ");
  if (!SRAM.readBlock(START_ADDRESS, BUFFER_SIZE, read_buffer)) {
    Serial.println("Read Block Failure");
  }

  // Print buffer to serial monitor
  for (size_t i=0; i < BUFFER_SIZE; i++) {
    Serial.write(read_buffer[i]);
  }
  Serial.println();

  delay(1000);
}

int main() {
    stdio_init_all();
    setup();
    loop();
    while(1) {
        sleep_ms(1000);
    }
}
