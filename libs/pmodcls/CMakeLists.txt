add_library(pac-pmodcls INTERFACE)

target_sources(pac-pmodcls INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PmodClsArduino/src/PmodCls.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PmodClsArduino/src/PmodCls.h"
)

target_include_directories(pac-pmodcls INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PmodClsArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pmodcls INTERFACE
    arduino-compat
)
