add_library(pac-neosegment INTERFACE)

target_sources(pac-neosegment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/Neosegment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/Neosegment.h"
)

target_include_directories(pac-neosegment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neosegment INTERFACE
    arduino-compat
)
