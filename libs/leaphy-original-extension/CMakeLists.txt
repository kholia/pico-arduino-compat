add_library(leaphy-original-extension INTERFACE)

target_sources(leaphy-original-extension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-original/src/Leaphyoriginal1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-original/src/Leaphyoriginal1.h"
)

target_include_directories(leaphy-original-extension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-original/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(leaphy-original-extension INTERFACE
    arduino-compat
)
