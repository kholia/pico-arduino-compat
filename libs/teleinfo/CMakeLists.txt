add_library(pac-teleinfo INTERFACE)

target_sources(pac-teleinfo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-teleinfo/TeleInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-teleinfo/TeleInfo.h"
)

target_include_directories(pac-teleinfo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-teleinfo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-teleinfo INTERFACE
    arduino-compat
)
