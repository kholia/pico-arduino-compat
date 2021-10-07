add_library(pac-googlemapsapi INTERFACE)

target_sources(pac-googlemapsapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-google-maps-api/src/GoogleMapsDirectionsApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-google-maps-api/src/GoogleMapsApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-google-maps-api/src/GoogleMapsDirectionsApi.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-google-maps-api/src/GoogleMapsApi.h"
)

target_include_directories(pac-googlemapsapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-google-maps-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-googlemapsapi INTERFACE
    arduino-compat
)
