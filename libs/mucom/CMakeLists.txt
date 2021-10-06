add_library(mucom INTERFACE)

target_sources(mucom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/muCom/src/muComBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muCom/src/muComBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/muCom/src/muCom.h"
)

target_include_directories(mucom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/muCom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mucom INTERFACE
    arduino-compat
)
