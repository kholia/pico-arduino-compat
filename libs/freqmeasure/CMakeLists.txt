add_library(pac-freqmeasure INTERFACE)

target_sources(pac-freqmeasure INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure/FreqMeasure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure/FreqMeasure.h"
  "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure/util/FreqMeasureCapture.h"
)

target_include_directories(pac-freqmeasure INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FreqMeasure"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-freqmeasure INTERFACE
    arduino-compat
)
