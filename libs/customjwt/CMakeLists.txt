add_library(customjwt INTERFACE)

target_sources(customjwt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/sha256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/CustomJWT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/CustomJWT.h"
  "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src/sha256.h"
)

target_include_directories(customjwt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CustomJWT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(customjwt INTERFACE
    arduino-compat
)
