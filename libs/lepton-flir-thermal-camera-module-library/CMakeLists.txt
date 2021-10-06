add_library(lepton-flir-thermal-camera-module-library INTERFACE)

target_sources(lepton-flir-thermal-camera-module-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino/LeptonFLiR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino/LeptonFLiR.h"
  "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino/LeptonFLiRDefs.h"
)

target_include_directories(lepton-flir-thermal-camera-module-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lepton-flir-thermal-camera-module-library INTERFACE
    arduino-compat
)
