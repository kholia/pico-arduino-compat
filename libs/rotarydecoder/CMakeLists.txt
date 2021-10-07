add_library(pac-rotarydecoder INTERFACE)

target_sources(pac-rotarydecoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoder/rotaryDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoder/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoder/rotaryDecoder.h"
)

target_include_directories(pac-rotarydecoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rotarydecoder INTERFACE
    arduino-compat
)
