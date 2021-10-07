add_library(pac-motorcvd_asukiaaa INTERFACE)

target_sources(pac-motorcvd_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-MotorCVD/src/MotorCVD_asukiaaa.hpp"
)

target_include_directories(pac-motorcvd_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-MotorCVD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-motorcvd_asukiaaa INTERFACE
    arduino-compat
)
