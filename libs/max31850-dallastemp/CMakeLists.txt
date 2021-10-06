add_library(max31850-dallastemp INTERFACE)

target_sources(max31850-dallastemp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX31850_DallasTemp/DallasTemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31850_DallasTemp/DallasTemperature.h"
)

target_include_directories(max31850-dallastemp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX31850_DallasTemp"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max31850-dallastemp INTERFACE
    arduino-compat
)
