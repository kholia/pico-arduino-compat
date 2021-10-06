add_library(mcreator-link INTERFACE)

target_sources(mcreator-link INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src/MCreatorLink.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src/BoardNames.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src/MCreatorLink.h"
)

target_include_directories(mcreator-link INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCreatorLinkArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcreator-link INTERFACE
    arduino-compat
)
