add_library(easyssdp INTERFACE)

target_sources(easyssdp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasySSDP/EasySSDP.h"
)

target_include_directories(easyssdp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasySSDP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easyssdp INTERFACE
    arduino-compat
)
