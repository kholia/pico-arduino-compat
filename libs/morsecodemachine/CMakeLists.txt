add_library(morsecodemachine INTERFACE)

target_sources(morsecodemachine INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/extras/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/extras/testInteropCPP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromHebrew.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromArabic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromPersian.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromRussian.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromGreek.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/sendMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_isDiacritic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_writeUnicodeFFFD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enToMorseElements.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromHebrew.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromHebrewMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromGreekMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_utf8ToUnicode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromArabic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromPersian.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromPersianMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromRussian.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromGreek.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_skipDiacritic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromRussianMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromArabicMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/sendMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_countUtf8Bytes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/extras/testInteropC.c"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/MorseCodeMachine.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/sendMorse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromArabic.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromHebrew.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromGreek.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromRussian.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/arduino/convertMorseFromPersian.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/sendMorse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromArabic.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromHebrew.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromGreekMorse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromArabicMorse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_writeUnicodeFFFD.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_countUtf8Bytes.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_utf8ToUnicode.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromGreek.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromRussian.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_skipDiacritic.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromRussianMorse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/convertMorseFromPersian.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromPersianMorse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enToMorseElements.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_enFromHebrewMorse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src/all/_isDiacritic.h"
)

target_include_directories(morsecodemachine INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MorseCodeMachine/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(morsecodemachine INTERFACE
    arduino-compat
)
