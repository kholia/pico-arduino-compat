add_library(wireutility-library INTERFACE)

target_sources(wireutility-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireUtility/WireUtility.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WireUtility/WireUtility.h"
)

target_include_directories(wireutility-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireUtility"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wireutility-library INTERFACE
    arduino-compat
)
