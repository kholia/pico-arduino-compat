add_library(pac-facebookapi INTERFACE)

target_sources(pac-facebookapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-facebook-api/src/FacebookApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-facebook-api/src/FacebookApi.h"
)

target_include_directories(pac-facebookapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-facebook-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-facebookapi INTERFACE
    arduino-compat
)
