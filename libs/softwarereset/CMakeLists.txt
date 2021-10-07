add_library(pac-softwarereset INTERFACE)

target_sources(pac-softwarereset INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SoftwareReset/src/SoftwareReset.h"
)

target_include_directories(pac-softwarereset INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SoftwareReset/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-softwarereset INTERFACE
    arduino-compat
)
