add_library(pac-asip-services INTERFACE)

target_sources(pac-asip-services INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/asip-additional-services/src/asipServos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/asip-additional-services/src/asipTone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/asip-additional-services/src/asipDistance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/asip-additional-services/src/asipTone.h"
  "${CMAKE_CURRENT_LIST_DIR}/asip-additional-services/src/asipDistance.h"
  "${CMAKE_CURRENT_LIST_DIR}/asip-additional-services/src/asipServos.h"
)

target_include_directories(pac-asip-services INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/asip-additional-services/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asip-services INTERFACE
    arduino-compat
)
