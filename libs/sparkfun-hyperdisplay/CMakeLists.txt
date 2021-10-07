add_library(pac-sparkfun-hyperdisplay INTERFACE)

target_sources(pac-sparkfun-hyperdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/src/hyperdisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/examples/Example1_simpleBareNecessities/bareNecessities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/examples/Example3_FontHandling/fontDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/templates/bareMinimumDerivedClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/src/hyperdisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/src/util/SparkFun_2DRayTracing.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/src/util/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/src/util/hyperdisplay_default_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/examples/Example1_simpleBareNecessities/bareNecessities.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/examples/Example3_FontHandling/fontDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/templates/bareMinimumDerivedClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/templates/hyperdisplay_custom_conf.h"
)

target_include_directories(pac-sparkfun-hyperdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HyperDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-hyperdisplay INTERFACE
    arduino-compat
)
