add_library(pac-somoiod INTERFACE)

target_sources(pac-somoiod INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SOMOIoD/src/SOMOIod.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SOMOIoD/src/SOMOIoD.h"
)

target_include_directories(pac-somoiod INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SOMOIoD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-somoiod INTERFACE
    arduino-compat
)
