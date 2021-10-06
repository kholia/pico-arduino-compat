add_library(stm32duino-iis2mdc INTERFACE)

target_sources(stm32duino-iis2mdc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IIS2MDC/src/IIS2MDCSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IIS2MDC/src/iis2mdc_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/IIS2MDC/src/IIS2MDCSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/IIS2MDC/src/iis2mdc_reg.h"
)

target_include_directories(stm32duino-iis2mdc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IIS2MDC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-iis2mdc INTERFACE
    arduino-compat
)
