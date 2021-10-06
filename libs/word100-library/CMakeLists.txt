add_library(word100-library INTERFACE)

target_sources(word100-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100Ham.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100BBT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100LBT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTFrench.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTdefault.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTEnglishM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100BBT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTEnglishF.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTPortuguese.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/HAMdefault.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100LBT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTSpanish.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTGerman.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTRussian.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100Ham.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/default.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/Word100.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/src/BBTItalian.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/say_day_based_on_date/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/LBT_example_one/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/example_one/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/sayNumber/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/LBT_d1_mini_talking_clock_NTP/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/BBT_d1_mini_talking_clock/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/BBT_example_one/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/callsign_announce/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/BBT_callsign_announce/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/Arduino_E-Z_Comms_Shield_with_LBT_chip_Example_One/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/Matt_Ganis_Code/saynumber_original/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/BBT_example_two_compound_words/license.h"
  "${CMAKE_CURRENT_LIST_DIR}/Word100/examples/LBT_example_two_timings/license.h"
)

target_include_directories(word100-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Word100/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(word100-library INTERFACE
    arduino-compat
)
