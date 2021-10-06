add_library(slipstream INTERFACE)

target_sources(slipstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src/SLIPStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src/SLIPStream.h"
)

target_include_directories(slipstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(slipstream INTERFACE
    arduino-compat
)
