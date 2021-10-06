add_library(unit-system INTERFACE)

target_sources(unit-system INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/momentum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/base.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/luminous_intensity.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/force.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/length.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/power.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/temperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/acceleration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/amount.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/electric_current.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/energy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/mass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/sources/speed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/base.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/length.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/momentum.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/power.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/mass.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/common.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/prefix.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/force.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/energy.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/unit_t.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/time.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/amount.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/unit-system.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/speed.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/temperature.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/luminous_intensity.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/electric_current.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src/acceleration.hpp"
)

target_include_directories(unit-system INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/unit-system-adruino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(unit-system INTERFACE
    arduino-compat
)
