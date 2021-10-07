add_library(pac-jeager-one INTERFACE)

target_sources(pac-jeager-one INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jeager-one/jeager/credential.c"
  "${CMAKE_CURRENT_LIST_DIR}/jeager-one/jeager/jeager.c"
)

target_include_directories(pac-jeager-one INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jeager-one"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jeager-one INTERFACE
    arduino-compat
)
