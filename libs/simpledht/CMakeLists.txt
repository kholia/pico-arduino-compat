add_library(pac-simpledht INTERFACE)

target_sources(pac-simpledht INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleDHT/SimpleDHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleDHT/SimpleDHT.h"
)

target_include_directories(pac-simpledht INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleDHT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpledht INTERFACE
    arduino-compat
)
