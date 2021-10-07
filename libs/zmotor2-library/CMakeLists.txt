add_library(pac-zmotor2-library INTERFACE)

target_sources(pac-zmotor2-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZMotor2/Zmotor2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZMotor2/Zmotor2.h"
)

target_include_directories(pac-zmotor2-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZMotor2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zmotor2-library INTERFACE
    arduino-compat
)
