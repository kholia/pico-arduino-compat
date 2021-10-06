add_library(freqcount INTERFACE)

target_sources(freqcount INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FreqCount/FreqCount.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FreqCount/FreqCount.h"
  "${CMAKE_CURRENT_LIST_DIR}/FreqCount/util/FreqCountTimers.h"
)

target_include_directories(freqcount INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FreqCount"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(freqcount INTERFACE
    arduino-compat
)
