add_library(pac-elk INTERFACE)

target_sources(pac-elk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/elk/elk.c"
  "${CMAKE_CURRENT_LIST_DIR}/elk/test/unit_test.c"
  "${CMAKE_CURRENT_LIST_DIR}/elk/examples/Esp32JS/mjson.c"
  "${CMAKE_CURRENT_LIST_DIR}/elk/examples/Esp32JS/mongoose.c"
  "${CMAKE_CURRENT_LIST_DIR}/elk/examples/cmdline/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/elk/elk.h"
  "${CMAKE_CURRENT_LIST_DIR}/elk/examples/Esp32JS/mjson.h"
  "${CMAKE_CURRENT_LIST_DIR}/elk/examples/Esp32JS/JS.h"
  "${CMAKE_CURRENT_LIST_DIR}/elk/examples/Esp32JS/mongoose.h"
)

target_include_directories(pac-elk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/elk"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-elk INTERFACE
    arduino-compat
)
