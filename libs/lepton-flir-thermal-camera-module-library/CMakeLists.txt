add_library(pac-lepton-flir-thermal-camera-module-library INTERFACE)

target_sources(pac-lepton-flir-thermal-camera-module-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino/LeptonFLiR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino/LeptonFLiR.h"
  "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino/LeptonFLiRDefs.h"
)

target_include_directories(pac-lepton-flir-thermal-camera-module-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Lepton-FLiR-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lepton-flir-thermal-camera-module-library INTERFACE
    arduino-compat
)
