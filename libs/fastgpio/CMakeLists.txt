add_library(fastgpio INTERFACE)

target_sources(fastgpio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fastgpio-arduino/FastGPIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/fastgpio-arduino/FastGPIO.h"
)

target_include_directories(fastgpio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fastgpio-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastgpio INTERFACE
    arduino-compat
)
