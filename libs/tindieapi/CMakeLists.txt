add_library(pac-tindieapi INTERFACE)

target_sources(pac-tindieapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tindie-api-arduino/src/TindieApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tindie-api-arduino/src/TindieApi.h"
)

target_include_directories(pac-tindieapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tindie-api-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tindieapi INTERFACE
    arduino-compat
)
