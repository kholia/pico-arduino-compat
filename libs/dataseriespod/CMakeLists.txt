add_library(dataseriespod INTERFACE)

target_sources(dataseriespod INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DataSeriesPod/src/DataSeriesPod.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DataSeriesPod/src/DataSeriesPod.h"
)

target_include_directories(dataseriespod INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-DataSeriesPod/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dataseriespod INTERFACE
    arduino-compat
)
