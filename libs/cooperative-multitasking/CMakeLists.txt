add_library(cooperative-multitasking INTERFACE)

target_sources(cooperative-multitasking INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cooperative-multitasking/CooperativeMultitasking.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cooperative-multitasking/CooperativeMultitasking.h"
)

target_include_directories(cooperative-multitasking INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cooperative-multitasking"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cooperative-multitasking INTERFACE
    arduino-compat
)
