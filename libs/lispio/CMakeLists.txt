add_library(pac-lispio INTERFACE)

target_sources(pac-lispio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LispIO/LispIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LispIO/LispIO.h"
)

target_include_directories(pac-lispio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LispIO"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lispio INTERFACE
    arduino-compat
)
