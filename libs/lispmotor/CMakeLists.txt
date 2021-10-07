add_library(pac-lispmotor INTERFACE)

target_sources(pac-lispmotor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LispMotor/LispMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LispMotor/LispMotor.h"
)

target_include_directories(pac-lispmotor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LispMotor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lispmotor INTERFACE
    arduino-compat
)
