add_library(pac-musician INTERFACE)

target_sources(pac-musician INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Musician/src/Musician.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Musician/src/TimeBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Musician/src/HardwareBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Musician/src/TimeBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Musician/src/HardwareBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Musician/src/Musician.h"
)

target_include_directories(pac-musician INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Musician/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-musician INTERFACE
    arduino-compat
)
