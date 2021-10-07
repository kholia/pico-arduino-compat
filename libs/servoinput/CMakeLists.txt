add_library(pac-servoinput INTERFACE)

target_sources(pac-servoinput INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ServoInput/src/ServoInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoInput/src/ServoInput_Platforms.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoInput/src/ServoInput.h"
)

target_include_directories(pac-servoinput INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ServoInput/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-servoinput INTERFACE
    arduino-compat
)
