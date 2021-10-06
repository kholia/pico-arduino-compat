add_library(lispmotor INTERFACE)

target_sources(lispmotor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LispMotor/LispMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LispMotor/LispMotor.h"
)

target_include_directories(lispmotor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LispMotor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lispmotor INTERFACE
    arduino-compat
)
