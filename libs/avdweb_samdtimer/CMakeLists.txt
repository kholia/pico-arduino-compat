add_library(pac-avdweb_samdtimer INTERFACE)

target_sources(pac-avdweb_samdtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_SAMDtimer/avdweb_SAMDtimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_SAMDtimer/avdweb_SAMDtimer.h"
)

target_include_directories(pac-avdweb_samdtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avdweb_SAMDtimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-avdweb_samdtimer INTERFACE
    arduino-compat
)
