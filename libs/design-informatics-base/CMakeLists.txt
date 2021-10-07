add_library(pac-design-informatics-base INTERFACE)

target_sources(pac-design-informatics-base INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src/DI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src/DI_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src/DI.h"
)

target_include_directories(pac-design-informatics-base INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-design-informatics-base INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
