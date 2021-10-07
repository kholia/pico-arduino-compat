add_library(pac-arduino-async-modem INTERFACE)

target_sources(pac-arduino-async-modem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/src/SIM7000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/AsyncModem.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/src/AsyncModem.h"
)

target_include_directories(pac-arduino-async-modem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-async-modem INTERFACE
    arduino-compat
)
