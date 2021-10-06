add_library(scenemanager INTERFACE)

target_sources(scenemanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/SceneBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/OneShotTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/PollingTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/IntervalCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/FrameRateCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/PollingTimer/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/SceneManager/util/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/examples/empty/EmptyScene.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/examples/handle_scene/EmptyScene.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/examples/simple/Speak.h"
  "${CMAKE_CURRENT_LIST_DIR}/SceneManager/examples/simple/Blink.h"
)

target_include_directories(scenemanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SceneManager"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(scenemanager INTERFACE
    arduino-compat
)
