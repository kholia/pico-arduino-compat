add_library(siderealplanets INTERFACE)

target_sources(siderealplanets INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SiderealPlanets/src/SiderealPlanets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SiderealPlanets/src/SiderealPlanets.h"
)

target_include_directories(siderealplanets INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SiderealPlanets/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(siderealplanets INTERFACE
    arduino-compat
)
