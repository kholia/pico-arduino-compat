add_library(freqmeasure INTERFACE)

target_sources(freqmeasure INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure/FreqMeasure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure/FreqMeasure.h"
  "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure/util/FreqMeasureCapture.h"
)

target_include_directories(freqmeasure INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(freqmeasure INTERFACE
    arduino-compat
)
