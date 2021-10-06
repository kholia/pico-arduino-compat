add_library(pms-library INTERFACE)

target_sources(pms-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMS/src/PMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMS/src/PMS.h"
)

target_include_directories(pms-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pms-library INTERFACE
    arduino-compat
)
