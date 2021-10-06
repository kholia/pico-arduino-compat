add_library(qdispatch INTERFACE)

target_sources(qdispatch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QDispatch/QDispatch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QDispatch/QDispatchCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/QDispatch/QDispatch.h"
)

target_include_directories(qdispatch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QDispatch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(qdispatch INTERFACE
    arduino-compat
)
