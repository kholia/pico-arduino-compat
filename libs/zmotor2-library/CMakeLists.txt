add_library(zmotor2-library INTERFACE)

target_sources(zmotor2-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZMotor2/Zmotor2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZMotor2/Zmotor2.h"
)

target_include_directories(zmotor2-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZMotor2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zmotor2-library INTERFACE
    arduino-compat
)
