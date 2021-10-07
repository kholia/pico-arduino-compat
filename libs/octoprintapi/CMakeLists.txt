add_library(pac-octoprintapi INTERFACE)

target_sources(pac-octoprintapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OctoPrintAPI/OctoPrintAPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OctoPrintAPI/OctoPrintAPI.h"
)

target_include_directories(pac-octoprintapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OctoPrintAPI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-octoprintapi INTERFACE
    arduino-compat
)
