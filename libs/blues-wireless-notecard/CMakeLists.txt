add_library(blues-wireless-notecard INTERFACE)

target_sources(blues-wireless-notecard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/Notecard.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/NoteSerial_Arduino.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/NoteLog_Arduino.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/NoteI2c_Arduino.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/NoteSerial_Mock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/NoteI2c_Mock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/NoteLog_Mock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/mock-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/Notecard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteI2c_Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteLog_Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteSerial_Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/TestFunction.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/NoteLog_Mock.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/mock-parameters.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/NoteSerial_Mock.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/NoteI2c_Mock.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/mock-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteI2c_Arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteLog.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteSerial_Arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteSerial.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteI2c.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/NoteLog_Arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/test/mock/mock-note-c-note.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_str.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_const.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_serial.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_cjson.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_ua.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_cjson_helpers.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_md5.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_printf.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_request.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_hooks.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_atof.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_i2c.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_b64.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_ftoa.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_helpers.c"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/Notecard.h"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_cjson.h"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/note.h"
  "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src/note-c/n_lib.h"
)

target_include_directories(blues-wireless-notecard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/note-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blues-wireless-notecard INTERFACE
    arduino-compat
)
