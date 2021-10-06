add_library(codecodecodec-library INTERFACE)

target_sources(codecodecodec-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CCC_Lib/CCC_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CCC_Lib/CCC_lib.h"
)

target_include_directories(codecodecodec-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CCC_Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(codecodecodec-library INTERFACE
    arduino-compat
)
