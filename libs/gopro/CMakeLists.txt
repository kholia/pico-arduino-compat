add_library(gopro INTERFACE)

target_sources(gopro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GoPRO/src/GoPRO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GoPRO/src/GoPROConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/GoPRO/src/GoPRO.h"
)

target_include_directories(gopro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GoPRO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gopro INTERFACE
    arduino-compat
)
