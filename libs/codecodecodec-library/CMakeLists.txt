add_library(pac-codecodecodec-library INTERFACE)

target_sources(pac-codecodecodec-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CCC_Lib/CCC_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CCC_Lib/CCC_lib.h"
)

target_include_directories(pac-codecodecodec-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CCC_Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-codecodecodec-library INTERFACE
    arduino-compat
)
