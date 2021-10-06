add_library(edushield-2-library INTERFACE)

target_sources(edushield-2-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EduShield2/src/edushield2_7segment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduShield2/src/edushield2_7segment.h"
)

target_include_directories(edushield-2-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EduShield2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(edushield-2-library INTERFACE
    arduino-compat
)
