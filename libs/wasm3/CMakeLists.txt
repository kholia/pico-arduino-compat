add_library(pac-wasm3 INTERFACE)

target_sources(pac-wasm3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples_pio/Wasm_Advanced/wasm_apps/cpp/app.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/wasm_apps/cpp/app.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_compile.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_exec.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_core.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_parse.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_api_libc.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_bind.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_env.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_info.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_code.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_module.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_function.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_emit.c"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples_pio/Wasm_Advanced/wasm_apps/tinygo/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples_pio/Wasm_Advanced/wasm_apps/rust/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples_pio/Wasm_Advanced/wasm_apps/cpp/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples_pio/Wasm_Advanced/wasm_apps/cpp/arduino_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples_pio/Wasm_Advanced/wasm_apps/assemblyscript/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/wasm_apps/tinygo/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/wasm_apps/rust/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/wasm_apps/cpp/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/wasm_apps/cpp/arduino_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/wasm_apps/assemblyscript/app.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_math_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_function.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_exec_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/wasm3_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_exception.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_bind.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_config_platforms.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_emit.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/wasm3.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_code.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_exec.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_env.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_api_libc.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_info.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src/m3_compile.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples/Wasm_CoreMark/coremark_minimal.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples/Wasm_Dino_PyBadge/dino.wasm.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples/Wasm_Dino_ESP32_TDisplay/NotoSansBold15.h"
  "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/examples/Wasm_Dino_ESP32_TDisplay/dino.wasm.h"
)

target_include_directories(pac-wasm3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/wasm3-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wasm3 INTERFACE
    arduino-compat
)
