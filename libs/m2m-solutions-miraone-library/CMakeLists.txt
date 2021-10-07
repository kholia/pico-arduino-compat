add_library(pac-m2m-solutions-miraone-library INTERFACE)

target_sources(pac-m2m-solutions-miraone-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M2M_MiraOne/src/M2M_MiraOneMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_MiraOne/src/M2M_MiraOne.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_MiraOne/src/M2M_MiraOne.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_MiraOne/src/M2M_MiraOnePayload.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_MiraOne/src/M2M_MiraOneMessage.h"
)

target_include_directories(pac-m2m-solutions-miraone-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M2M_MiraOne/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m2m-solutions-miraone-library INTERFACE
    arduino-compat
)
