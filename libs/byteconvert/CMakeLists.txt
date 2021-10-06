add_library(byteconvert INTERFACE)

target_sources(byteconvert INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ByteConvert_arduino/src/ByteConvert.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ByteConvert_arduino/src/ByteConvert.hpp"
)

target_include_directories(byteconvert INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ByteConvert_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(byteconvert INTERFACE
    arduino-compat
)
