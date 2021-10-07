add_library(pac-tween INTERFACE)

target_sources(pac-tween INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/Transition.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/Timeline.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/Sequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/CubicEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/BounceEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/ExponentialEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/QuadraticEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/QuarticEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/LinearEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/EasingBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/BackEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/ElasticEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/CircularEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/SineEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/Easing/Easing/QuinticEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/OneShotTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/PollingTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/IntervalCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/FrameRateCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/PollingTimer/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tween/Tween/util/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
)

target_include_directories(pac-tween INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tween"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tween INTERFACE
    arduino-compat
)
