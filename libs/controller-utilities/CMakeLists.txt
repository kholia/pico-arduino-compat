add_library(pac-controller-utilities INTERFACE)

target_sources(pac-controller-utilities INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CtrlUtil/src/CtrlUtil.h"
)

target_include_directories(pac-controller-utilities INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CtrlUtil/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-controller-utilities INTERFACE
    arduino-compat
)
