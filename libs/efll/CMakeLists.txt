add_library(efll INTERFACE)

target_sources(efll INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyComposition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzySet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/Fuzzy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyRuleConsequent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyRuleAntecedent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyRule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/examples/general_simple_sample/general_simple_sample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/examples/general_advanced_sample/general_advanced_sample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/tests/FuzzyTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/tests/GeneralTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzySet.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/Fuzzy.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyComposition.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyRuleConsequent.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyRuleAntecedent.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/eFLL/FuzzyRule.h"
)

target_include_directories(efll INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/eFLL"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(efll INTERFACE
    arduino-compat
)
