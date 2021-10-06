add_library(genericmotordriver INTERFACE)

target_sources(genericmotordriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GenericMotorDriver/MotorController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GenericMotorDriver/MotorController.h"
)

target_include_directories(genericmotordriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GenericMotorDriver"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(genericmotordriver INTERFACE
    arduino-compat
)
