add_library(easypin INTERFACE)

target_sources(easypin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyPin/EasyPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyPin/EasyPin.h"
)

target_include_directories(easypin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyPin"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easypin INTERFACE
    arduino-compat
)
