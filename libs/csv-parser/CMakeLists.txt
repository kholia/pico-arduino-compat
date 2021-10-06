add_library(csv-parser INTERFACE)

target_sources(csv-parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CSV-Parser-for-Arduino/CSV_Parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CSV-Parser-for-Arduino/CSV_Parser.h"
)

target_include_directories(csv-parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CSV-Parser-for-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(csv-parser INTERFACE
    arduino-compat
    official-sd
)
