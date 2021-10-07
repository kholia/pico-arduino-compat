add_library(pac-easystringstream INTERFACE)

target_sources(pac-easystringstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyStringStream/src/EasyStringStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyStringStream/src/EasyStringStream.h"
)

target_include_directories(pac-easystringstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyStringStream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easystringstream INTERFACE
    arduino-compat
)
