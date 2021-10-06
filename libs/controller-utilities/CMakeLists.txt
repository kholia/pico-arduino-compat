add_library(controller-utilities INTERFACE)

target_sources(controller-utilities INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CtrlUtil/src/CtrlUtil.h"
)

target_include_directories(controller-utilities INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CtrlUtil/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(controller-utilities INTERFACE
    arduino-compat
)
