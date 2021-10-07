add_library(pac-wakeonlan INTERFACE)

target_sources(pac-wakeonlan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WakeOnLan/src/WakeOnLan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WakeOnLan/src/WakeOnLan.h"
)

target_include_directories(pac-wakeonlan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WakeOnLan/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wakeonlan INTERFACE
    arduino-compat
)
