add_library(pac-byteconvert INTERFACE)

target_sources(pac-byteconvert INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ByteConvert_arduino/src/ByteConvert.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ByteConvert_arduino/src/ByteConvert.hpp"
)

target_include_directories(pac-byteconvert INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ByteConvert_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-byteconvert INTERFACE
    arduino-compat
)
