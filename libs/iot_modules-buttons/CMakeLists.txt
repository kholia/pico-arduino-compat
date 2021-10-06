add_library(iot_modules-buttons INTERFACE)

target_sources(iot_modules-buttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoT_Modules-Buttons/src/IoT_Modules-Buttons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoT_Modules-Buttons/src/IoT_Modules-Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoT_Modules-Buttons/src/constants.h"
)

target_include_directories(iot_modules-buttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoT_Modules-Buttons/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iot_modules-buttons INTERFACE
    arduino-compat
)
