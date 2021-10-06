add_library(easybuttonatint01 INTERFACE)

target_sources(easybuttonatint01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyButtonAtInt01/src/EasyButtonAtInt01.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButtonAtInt01/examples/EasyButtonExample/ATtinySerialOut.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButtonAtInt01/src/EasyButtonAtInt01.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButtonAtInt01/src/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButtonAtInt01/src/EasyButtonAtInt01.cpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButtonAtInt01/examples/EasyButtonExample/ATtinySerialOut.h"
)

target_include_directories(easybuttonatint01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyButtonAtInt01/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easybuttonatint01 INTERFACE
    arduino-compat
)
