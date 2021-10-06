add_library(prng INTERFACE)

target_sources(prng INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pRNG/pRNG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pRNG/pRNG.h"
)

target_include_directories(prng INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pRNG"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(prng INTERFACE
    arduino-compat
)
