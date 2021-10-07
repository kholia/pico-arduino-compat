add_library(pac-csv-parser INTERFACE)

target_sources(pac-csv-parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CSV-Parser-for-Arduino/CSV_Parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CSV-Parser-for-Arduino/CSV_Parser.h"
)

target_include_directories(pac-csv-parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CSV-Parser-for-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-csv-parser INTERFACE
    arduino-compat
    pac-sd
)
