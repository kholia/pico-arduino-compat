add_library(pac-easyinglib INTERFACE)

target_sources(pac-easyinglib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Easing/src/EasingLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Easing/src/EasingLib.h"
)

target_include_directories(pac-easyinglib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Easing/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyinglib INTERFACE
    arduino-compat
)
