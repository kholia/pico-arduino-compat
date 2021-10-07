add_library(pac-somfy_remote_lib INTERFACE)

target_sources(pac-somfy_remote_lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src/NVSRollingCodeStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src/EEPROMRollingCodeStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src/SomfyRemote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src/RollingCodeStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src/SomfyRemote.h"
  "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src/NVSRollingCodeStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src/EEPROMRollingCodeStorage.h"
)

target_include_directories(pac-somfy_remote_lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Somfy_Remote_Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-somfy_remote_lib INTERFACE
    arduino-compat
)
