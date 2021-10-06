add_library(l298n INTERFACE)

target_sources(l298n INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/L298N/src/L298NX2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/L298N/src/L298N.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/L298N/src/L298NX2.h"
  "${CMAKE_CURRENT_LIST_DIR}/L298N/src/L298N.h"
)

target_include_directories(l298n INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/L298N/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(l298n INTERFACE
    arduino-compat
)
