add_library(lispio INTERFACE)

target_sources(lispio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LispIO/LispIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LispIO/LispIO.h"
)

target_include_directories(lispio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LispIO"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lispio INTERFACE
    arduino-compat
)
