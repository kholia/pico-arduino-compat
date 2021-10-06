add_library(easing INTERFACE)

target_sources(easing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/CubicEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/BounceEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/ExponentialEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/QuadraticEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/QuarticEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/LinearEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/EasingBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/BackEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/ElasticEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/CircularEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/SineEase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easing/Easing/QuinticEase.h"
)

target_include_directories(easing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Easing"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easing INTERFACE
    arduino-compat
)
