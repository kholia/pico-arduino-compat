add_library(pac-derivs_limiter INTERFACE)

target_sources(pac-derivs_limiter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Derivs_Limiter/src/Derivs_Limiter.h"
)

target_include_directories(pac-derivs_limiter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Derivs_Limiter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-derivs_limiter INTERFACE
    arduino-compat
)
