add_library(pac-ingenia-serial-servo-drive-library INTERFACE)

target_sources(pac-ingenia-serial-servo-drive-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ingenia-Serial-Servo-Drive-Library/Ingenia_SerialServoDrive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ingenia-Serial-Servo-Drive-Library/Ingenia_SerialServoDrive.h"
)

target_include_directories(pac-ingenia-serial-servo-drive-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ingenia-Serial-Servo-Drive-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ingenia-serial-servo-drive-library INTERFACE
    arduino-compat
)
