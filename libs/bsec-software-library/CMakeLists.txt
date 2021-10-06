add_library(bsec-software-library INTERFACE)

target_sources(bsec-software-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src/bsec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src/bme680/bme680.c"
  "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src/bsec.h"
  "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src/inc/bsec_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src/inc/bsec_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src/bme680/bme680_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src/bme680/bme680.h"
)

target_include_directories(bsec-software-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BSEC-Arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bsec-software-library INTERFACE
    arduino-compat
)
