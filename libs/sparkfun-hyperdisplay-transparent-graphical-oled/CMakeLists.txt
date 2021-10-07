add_library(pac-sparkfun-hyperdisplay-transparent-graphical-oled INTERFACE)

target_sources(pac-sparkfun-hyperdisplay-transparent-graphical-oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/src/HyperDisplay_UG2856KLBAG01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/src/HyperDisplay_UG2856KLBAG01.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/type.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_skull.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_stanBun.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_torus.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_monkey.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_cone.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_sphere.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_pikachu.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_cube.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/examples/Example9_Volumetric_Requires10xDisplays/meshes/mesh_mask.h"
)

target_include_directories(pac-sparkfun-hyperdisplay-transparent-graphical-oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_UG2856KLBAG01_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-hyperdisplay-transparent-graphical-oled INTERFACE
    arduino-compat
)
