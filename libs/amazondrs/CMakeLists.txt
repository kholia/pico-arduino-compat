add_library(pac-amazondrs INTERFACE)

target_sources(pac-amazondrs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AmazonDRS/src/AmazonDRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AmazonDRS/src/AmazonTokens.h"
  "${CMAKE_CURRENT_LIST_DIR}/AmazonDRS/src/AmazonDRS.h"
)

target_include_directories(pac-amazondrs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AmazonDRS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-amazondrs INTERFACE
    arduino-compat
)
