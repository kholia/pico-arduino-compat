add_library(pac-decodeir INTERFACE)

target_sources(pac-decodeir INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/src/DecodeIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/src/decodePrintIr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/examples/InfraredDecoderLCD/DecodeIRClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/src/DecodeIR.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/src/decodePrintIr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/examples/InfraredDecoderLCD/DecodeIRClass.h"
)

target_include_directories(pac-decodeir INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-DecodeIR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-decodeir INTERFACE
    arduino-compat
)
