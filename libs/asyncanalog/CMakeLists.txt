add_library(pac-asyncanalog INTERFACE)

target_sources(pac-asyncanalog INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncAnalog/AsyncAnalog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncAnalog/AsyncAnalog.h"
)

target_include_directories(pac-asyncanalog INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncAnalog"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asyncanalog INTERFACE
    arduino-compat
)
