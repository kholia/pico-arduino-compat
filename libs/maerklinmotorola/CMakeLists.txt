add_library(maerklinmotorola INTERFACE)

target_sources(maerklinmotorola INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MaerklinMotorola/MaerklinMotorola.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MaerklinMotorola/MaerklinMotorola.h"
)

target_include_directories(maerklinmotorola INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MaerklinMotorola"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(maerklinmotorola INTERFACE
    arduino-compat
)
