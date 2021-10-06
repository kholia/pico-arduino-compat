add_library(arduino-async-modem INTERFACE)

target_sources(arduino-async-modem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/src/SIM7000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/AsyncModem.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/src/AsyncModem.h"
)

target_include_directories(arduino-async-modem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-async-modem/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-async-modem INTERFACE
    arduino-compat
)
