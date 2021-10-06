add_library(nmeaparser INTERFACE)

target_sources(nmeaparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NMEAParser/extra/test/testNMEA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NMEAParser/extra/gen/NMEASentencesGenerator.c"
  "${CMAKE_CURRENT_LIST_DIR}/NMEAParser/src/NMEAParser.h"
)

target_include_directories(nmeaparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NMEAParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nmeaparser INTERFACE
    arduino-compat
)
