add_library(pac-pms-library INTERFACE)

target_sources(pac-pms-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMS/src/PMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMS/src/PMS.h"
)

target_include_directories(pac-pms-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pms-library INTERFACE
    arduino-compat
)
