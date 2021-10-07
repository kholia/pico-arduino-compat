add_library(pac-edushield-2-library INTERFACE)

target_sources(pac-edushield-2-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EduShield2/src/edushield2_7segment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduShield2/src/edushield2_7segment.h"
)

target_include_directories(pac-edushield-2-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EduShield2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-edushield-2-library INTERFACE
    arduino-compat
)
