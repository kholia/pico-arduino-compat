add_library(easyinglib INTERFACE)

target_sources(easyinglib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Easing/src/EasingLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Easing/src/EasingLib.h"
)

target_include_directories(easyinglib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Easing/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easyinglib INTERFACE
    arduino-compat
)
