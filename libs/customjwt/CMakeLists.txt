add_library(pac-customjwt INTERFACE)

target_sources(pac-customjwt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/sha256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/CustomJWT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/CustomJWT.h"
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/sha256.h"
)

target_include_directories(pac-customjwt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-customjwt INTERFACE
    arduino-compat
)
