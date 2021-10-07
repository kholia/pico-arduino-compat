add_library(pac-fabo-207-temperature-adt7410 INTERFACE)

target_sources(pac-fabo-207-temperature-adt7410 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoTemperature-ADT7410-Library/src/FaBoTemperature_ADT7410.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoTemperature-ADT7410-Library/src/FaBoTemperature_ADT7410.h"
)

target_include_directories(pac-fabo-207-temperature-adt7410 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoTemperature-ADT7410-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-207-temperature-adt7410 INTERFACE
    arduino-compat
)
