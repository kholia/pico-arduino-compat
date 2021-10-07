add_library(pac-cayennelppdec INTERFACE)

target_sources(pac-cayennelppdec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CayenneLPPdec/src/CayenneLPPDec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CayenneLPPdec/examples/CayenneLPPdec_test/helperFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CayenneLPPdec/src/CayenneLPPDec.h"
  "${CMAKE_CURRENT_LIST_DIR}/CayenneLPPdec/examples/CayenneLPPdec_test/helperFunctions.h"
)

target_include_directories(pac-cayennelppdec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CayenneLPPdec/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cayennelppdec INTERFACE
    arduino-compat
)
