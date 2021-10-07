add_library(pac-picovoice_en INTERFACE)

target_sources(pac-picovoice_en INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/src/Picovoice_EN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/src/utility/pv_audio_rec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/src/Picovoice_EN.h"
  "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/src/pv_picovoice.h"
  "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/src/picovoice.h"
  "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/src/utility/pv_audio_rec.h"
  "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/examples/PicovoiceExample/params.h"
)

target_include_directories(pac-picovoice_en INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/picovoice-arduino-en/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-picovoice_en INTERFACE
    arduino-compat
)
