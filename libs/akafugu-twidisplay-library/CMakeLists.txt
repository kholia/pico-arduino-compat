add_library(akafugu-twidisplay-library INTERFACE)

target_sources(akafugu-twidisplay-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TWIDisplayLibrary/TWIDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TWIDisplayLibrary/TWIDisplay.h"
)

target_include_directories(akafugu-twidisplay-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TWIDisplayLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(akafugu-twidisplay-library INTERFACE
    arduino-compat
)
