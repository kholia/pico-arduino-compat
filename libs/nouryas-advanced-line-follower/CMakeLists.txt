add_library(nouryas-advanced-line-follower INTERFACE)

target_sources(nouryas-advanced-line-follower INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nouryas-Advanced-Line-Follower-Array/src/Adv_Line_Follower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nouryas-Advanced-Line-Follower-Array/src/Adv_Line_Follower.h"
)

target_include_directories(nouryas-advanced-line-follower INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nouryas-Advanced-Line-Follower-Array/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nouryas-advanced-line-follower INTERFACE
    arduino-compat
)
