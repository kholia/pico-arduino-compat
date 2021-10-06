add_library(m5facesencoder INTERFACE)

target_sources(m5facesencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5FacesEncoder/src/M5FacesEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5FacesEncoder/src/M5FacesEncoder.h"
)

target_include_directories(m5facesencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5FacesEncoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5facesencoder INTERFACE
    arduino-compat
)
