add_library(pac-taskmanager INTERFACE)

target_sources(pac-taskmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/TaskEmpty.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/TaskBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/OneShotTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/PollingTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/IntervalCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/FrameRateCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/PollingTimer/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLogRestoreState.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLogDisable.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLogEnable.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/FileLogger.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/Manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/TaskManager/util/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_subtask_sync/Speak.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_subtask_sequence/Speak.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_subtask_parallel/Speak.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_timing_control/SpeakEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_empty/EmptyTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_parameter/Speak.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_simple/Speak.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_simple/Blink.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManager/examples/task_class_subtask_manual/Speak.h"
)

target_include_directories(pac-taskmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TaskManager"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-taskmanager INTERFACE
    arduino-compat
)
