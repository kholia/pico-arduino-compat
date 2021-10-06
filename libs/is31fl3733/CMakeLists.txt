add_library(is31fl3733 INTERFACE)

target_sources(is31fl3733 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/is31fl3733/is31fl3733.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/is31fl3733/Arduino_is31fl3733.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/is31fl3733/is31fl3733_abm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/is31fl3733/Arduino_is31fl3733.h"
  "${CMAKE_CURRENT_LIST_DIR}/is31fl3733/is31fl3733_abm.h"
  "${CMAKE_CURRENT_LIST_DIR}/is31fl3733/is31fl3733.h"
)

target_include_directories(is31fl3733 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/is31fl3733"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(is31fl3733 INTERFACE
    arduino-compat
)
