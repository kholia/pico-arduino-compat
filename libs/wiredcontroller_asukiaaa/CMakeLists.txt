add_library(wiredcontroller_asukiaaa INTERFACE)

target_sources(wiredcontroller_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiredController_asukiaaa/src/WiredController_asukiaaa.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiredController_asukiaaa/src/WiredController_asukiaaa.h"
)

target_include_directories(wiredcontroller_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiredController_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wiredcontroller_asukiaaa INTERFACE
    arduino-compat
)
