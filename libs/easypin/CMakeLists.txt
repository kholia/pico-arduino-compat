add_library(pac-easypin INTERFACE)

target_sources(pac-easypin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyPin/EasyPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyPin/EasyPin.h"
)

target_include_directories(pac-easypin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyPin"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easypin INTERFACE
    arduino-compat
)
