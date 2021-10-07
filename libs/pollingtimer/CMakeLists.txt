add_library(pac-pollingtimer INTERFACE)

target_sources(pac-pollingtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/OneShotTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/PollingTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/IntervalCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/FrameRateCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/PollingTimer/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
)

target_include_directories(pac-pollingtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PollingTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pollingtimer INTERFACE
    arduino-compat
)
