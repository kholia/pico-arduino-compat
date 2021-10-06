add_library(tindieapi INTERFACE)

target_sources(tindieapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tindie-api-arduino/src/TindieApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tindie-api-arduino/src/TindieApi.h"
)

target_include_directories(tindieapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tindie-api-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tindieapi INTERFACE
    arduino-compat
)
