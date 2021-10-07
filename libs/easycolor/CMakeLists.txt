add_library(pac-easycolor INTERFACE)

target_sources(pac-easycolor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyColor/src/EasyColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyColor/src/EasyColor.h"
)

target_include_directories(pac-easycolor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyColor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easycolor INTERFACE
    arduino-compat
)
