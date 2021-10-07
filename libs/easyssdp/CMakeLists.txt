add_library(pac-easyssdp INTERFACE)

target_sources(pac-easyssdp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasySSDP/EasySSDP.h"
)

target_include_directories(pac-easyssdp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasySSDP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyssdp INTERFACE
    arduino-compat
)
