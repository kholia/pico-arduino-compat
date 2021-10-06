add_library(ds2431 INTERFACE)

target_sources(ds2431 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS2431_Arduino/DS2431.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS2431_Arduino/DS2431.h"
)

target_include_directories(ds2431 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS2431_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds2431 INTERFACE
    arduino-compat
)
