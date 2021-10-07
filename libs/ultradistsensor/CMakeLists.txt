add_library(pac-ultradistsensor INTERFACE)

target_sources(pac-ultradistsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UltraDistSensor/UltraDistSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UltraDistSensor/UltraDistSensor.h"
)

target_include_directories(pac-ultradistsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UltraDistSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ultradistsensor INTERFACE
    arduino-compat
)
