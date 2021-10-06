add_library(indio INTERFACE)

target_sources(indio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Indio/src/Indio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Indio/src/Indio.h"
)

target_include_directories(indio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Indio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(indio INTERFACE
    arduino-compat
)
