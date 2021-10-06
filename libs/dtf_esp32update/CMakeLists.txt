add_library(dtf_esp32update INTERFACE)

target_sources(dtf_esp32update INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_esp32_update/src/DTF_ESP32Update.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_esp32_update/src/DTF_ESP32Update.h"
)

target_include_directories(dtf_esp32update INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_esp32_update/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dtf_esp32update INTERFACE
    arduino-compat
)
