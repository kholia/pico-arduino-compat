add_library(easycolor INTERFACE)

target_sources(easycolor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyColor/src/EasyColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyColor/src/EasyColor.h"
)

target_include_directories(easycolor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyColor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easycolor INTERFACE
    arduino-compat
)
