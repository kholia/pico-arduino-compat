add_library(pac-maerklinmotorola INTERFACE)

target_sources(pac-maerklinmotorola INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MaerklinMotorola/MaerklinMotorola.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MaerklinMotorola/MaerklinMotorola.h"
)

target_include_directories(pac-maerklinmotorola INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MaerklinMotorola"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-maerklinmotorola INTERFACE
    arduino-compat
)
