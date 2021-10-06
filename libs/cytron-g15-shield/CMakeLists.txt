add_library(cytron-g15-shield INTERFACE)

target_sources(cytron-g15-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cytron-G15Shield/src/Cytron_G15Shield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron-G15Shield/src/Cytron_G15Shield.h"
)

target_include_directories(cytron-g15-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cytron-G15Shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cytron-g15-shield INTERFACE
    arduino-compat
)
