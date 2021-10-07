add_library(pac-herkulexservo INTERFACE)

target_sources(pac-herkulexservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HerkulexServo/HerkulexServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HerkulexServo/HerkulexServo.h"
)

target_include_directories(pac-herkulexservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HerkulexServo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-herkulexservo INTERFACE
    arduino-compat
)
