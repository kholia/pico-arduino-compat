add_library(pac-ds2431 INTERFACE)

target_sources(pac-ds2431 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS2431_Arduino/DS2431.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS2431_Arduino/DS2431.h"
)

target_include_directories(pac-ds2431 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS2431_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds2431 INTERFACE
    arduino-compat
)
