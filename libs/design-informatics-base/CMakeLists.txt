add_library(design-informatics-base INTERFACE)

target_sources(design-informatics-base INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src/DI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src/DI_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src/DI.h"
)

target_include_directories(design-informatics-base INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DesignInformaticsPCB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(design-informatics-base INTERFACE
    arduino-compat
    adafruit-gfx-library
)
