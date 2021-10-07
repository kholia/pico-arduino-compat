add_library(pac-mcreator-link INTERFACE)

target_sources(pac-mcreator-link INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src/MCreatorLink.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src/BoardNames.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src/MCreatorLink.h"
)

target_include_directories(pac-mcreator-link INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcreator-link INTERFACE
    arduino-compat
)
