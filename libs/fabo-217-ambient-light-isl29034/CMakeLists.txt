add_library(fabo-217-ambient-light-isl29034 INTERFACE)

target_sources(fabo-217-ambient-light-isl29034 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoAmbientLight-ISL29034-Library/src/FaBoAmbientLight_ISL29034.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoAmbientLight-ISL29034-Library/src/FaBoAmbientLight_ISL29034.h"
)

target_include_directories(fabo-217-ambient-light-isl29034 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoAmbientLight-ISL29034-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-217-ambient-light-isl29034 INTERFACE
    arduino-compat
)
