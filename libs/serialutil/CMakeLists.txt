add_library(pac-serialutil INTERFACE)

target_sources(pac-serialutil INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialUtil/SerialUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialUtil/SerialUtil.h"
)

target_include_directories(pac-serialutil INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialUtil"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialutil INTERFACE
    arduino-compat
)
