add_library(facebookapi INTERFACE)

target_sources(facebookapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-facebook-api/src/FacebookApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-facebook-api/src/FacebookApi.h"
)

target_include_directories(facebookapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-facebook-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(facebookapi INTERFACE
    arduino-compat
)
