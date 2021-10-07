add_library(pac-rcn600 INTERFACE)

target_sources(pac-rcn600 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/src/Rcn600.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/examples/Susi_OverI2c/Master/SusiOverI2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/examples/Susi_OverI2c/Slave/SusiOverI2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/src/Rcn600.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/src/DataHeaders/SUSI_AN_FN_BIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/src/DataHeaders/SUSI_FN_BIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/src/DataHeaders/SUSI_DATA_TYPE.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/src/DataHeaders/SUSI_AUX_BIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/examples/Susi_OverI2c/Master/SusiOverI2c.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rcn600/examples/Susi_OverI2c/Slave/SusiOverI2c.h"
)

target_include_directories(pac-rcn600 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Rcn600/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rcn600 INTERFACE
    arduino-compat
)
