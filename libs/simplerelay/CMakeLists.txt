add_library(pac-simplerelay INTERFACE)

target_sources(pac-simplerelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRelay/test/on_off_toggle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRelay/test/sanity_checks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRelay/src/SimpleRelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRelay/doc/SimpleRelay_DoxygenMainPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRelay/src/SimpleRelay.h"
)

target_include_directories(pac-simplerelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleRelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplerelay INTERFACE
    arduino-compat
)
