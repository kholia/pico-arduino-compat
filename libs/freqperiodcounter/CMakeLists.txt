add_library(pac-freqperiodcounter INTERFACE)

target_sources(pac-freqperiodcounter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_FreqPeriodCounter/FreqPeriodCounter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_FreqPeriodCounter/FreqPeriodCounter.h"
)

target_include_directories(pac-freqperiodcounter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avdweb_FreqPeriodCounter"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-freqperiodcounter INTERFACE
    arduino-compat
)
