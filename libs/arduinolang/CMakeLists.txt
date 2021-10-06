add_library(arduinolang INTERFACE)

target_sources(arduinolang INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/tests/preprocessor_limits.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/src/ArduinoLangPT.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/src/ArduinoLang.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/src/ArduinoLangES.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/src/utility.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/src/ArduinoLangPT_Portugol.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/examples/PT-Portugol/Ex09.Melodia/notas.h"
)

target_include_directories(arduinolang INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLang/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinolang INTERFACE
    arduino-compat
)
