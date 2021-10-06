add_library(i2c-temperature-sensors-derived-from-the-lm75 INTERFACE)

target_sources(i2c-temperature-sensors-derived-from-the-lm75 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Temperature_LM75_Derived/src/Temperature_LM75_Derived.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temperature_LM75_Derived/src/Temperature_LM75_Derived.h"
)

target_include_directories(i2c-temperature-sensors-derived-from-the-lm75 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Temperature_LM75_Derived/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c-temperature-sensors-derived-from-the-lm75 INTERFACE
    arduino-compat
)
