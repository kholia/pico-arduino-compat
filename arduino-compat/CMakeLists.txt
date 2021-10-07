add_library(arduino-compat INTERFACE)

target_compile_options(arduino-compat INTERFACE -DARDUINO=200 -DARDUINO_ARCH_RP2040 -DF_CPU=125000000UL -DNO_USB)

target_sources(arduino-compat INTERFACE
    # The Serial global object uses pico stdio so the following are not necessary
    #${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/SerialUSB.cpp
    #${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/RP2040USB.cpp

    # nb. serialEvent() functions will never be called when this is disabled
    #${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/main.cpp

    # not needed
    #${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/posix.cpp

    # millis already defined in delay.cpp
    #${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/millis.cpp

    # ?
    #${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/FS.cpp

    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/wiring_shift.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/delay.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/wiring_pulse.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/wiring_analog.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/Tone.cpp

    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/Common.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/Stream.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/String.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/PluggableUSB.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/IPAddress.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/Print.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/stdlib_noniso.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/wiring_digital.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/wiring_private.cpp
    #${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/Bootsel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/SerialUART.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/WMath.cpp

    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/libraries/SPI/SPI.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/libraries/Wire/src/Wire.cpp

    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico-extra/HardwareSerialStdio.cpp
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico-extra/SerialExtern.cpp
)

target_include_directories(arduino-compat INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico-extra/

    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/libraries/Wire/src/
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/libraries/SPI/
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/deprecated
    ${CMAKE_CURRENT_LIST_DIR}/arduino-pico/cores/rp2040/api/deprecated-avr-comp
)

target_link_libraries(arduino-compat INTERFACE
    hardware_adc
    hardware_exception
    hardware_i2c
    hardware_pio
    hardware_pwm
    hardware_spi
    pico_multicore
    pico_stdlib
)
