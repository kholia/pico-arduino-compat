add_library(pac-rtczero INTERFACE)

target_sources(pac-rtczero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCZero/src/RTCZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCZero/src/RTCZero.h"
)

target_include_directories(pac-rtczero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtczero INTERFACE
    arduino-compat
)
