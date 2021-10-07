add_library(pac-prng INTERFACE)

target_sources(pac-prng INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pRNG/pRNG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pRNG/pRNG.h"
)

target_include_directories(pac-prng INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pRNG"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-prng INTERFACE
    arduino-compat
)
