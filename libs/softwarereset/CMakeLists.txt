add_library(softwarereset INTERFACE)

target_sources(softwarereset INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SoftwareReset/src/SoftwareReset.h"
)

target_include_directories(softwarereset INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SoftwareReset/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(softwarereset INTERFACE
    arduino-compat
)
