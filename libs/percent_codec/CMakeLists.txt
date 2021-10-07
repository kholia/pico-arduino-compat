add_library(pac-percent_codec INTERFACE)

target_sources(pac-percent_codec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_percent/src/percent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_percent/src/percent.hpp"
)

target_include_directories(pac-percent_codec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_percent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-percent_codec INTERFACE
    arduino-compat
)
