add_library(ultradistsensor INTERFACE)

target_sources(ultradistsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UltraDistSensor/UltraDistSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UltraDistSensor/UltraDistSensor.h"
)

target_include_directories(ultradistsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UltraDistSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ultradistsensor INTERFACE
    arduino-compat
)
