add_library(teleinfo INTERFACE)

target_sources(teleinfo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-teleinfo/TeleInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-teleinfo/TeleInfo.h"
)

target_include_directories(teleinfo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-teleinfo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(teleinfo INTERFACE
    arduino-compat
)
