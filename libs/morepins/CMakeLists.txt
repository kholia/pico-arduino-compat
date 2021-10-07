add_library(pac-morepins INTERFACE)

target_sources(pac-morepins INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Lib_MorePins/src/MoreInputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Lib_MorePins/src/MoreInputs.h"
)

target_include_directories(pac-morepins INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_Lib_MorePins/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-morepins INTERFACE
    arduino-compat
)
