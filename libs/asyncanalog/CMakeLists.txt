add_library(asyncanalog INTERFACE)

target_sources(asyncanalog INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncAnalog/AsyncAnalog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncAnalog/AsyncAnalog.h"
)

target_include_directories(asyncanalog INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncAnalog"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncanalog INTERFACE
    arduino-compat
)
