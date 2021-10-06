#pragma once
#include "../arduino-pico/libraries/SPI/SPI.h"
#undef SPI_HAS_TRANSACTION
#define SPI_HAS_TRANSACTION 1
