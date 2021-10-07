add_library(pac-printoo_library INTERFACE)

target_sources(pac-printoo_library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src/printoo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src/SoftwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src/SoftwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src/graphics.h"
  "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src/printoo.h"
  "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src/Servo.h"
)

target_include_directories(pac-printoo_library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/printoo_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-printoo_library INTERFACE
    arduino-compat
)
