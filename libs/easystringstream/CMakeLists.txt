add_library(easystringstream INTERFACE)

target_sources(easystringstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyStringStream/src/EasyStringStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyStringStream/src/EasyStringStream.h"
)

target_include_directories(easystringstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyStringStream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easystringstream INTERFACE
    arduino-compat
)
