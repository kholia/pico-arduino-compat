add_library(pac-mucom INTERFACE)

target_sources(pac-mucom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/muCom/src/muComBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muCom/src/muComBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/muCom/src/muCom.h"
)

target_include_directories(pac-mucom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/muCom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mucom INTERFACE
    arduino-compat
)
