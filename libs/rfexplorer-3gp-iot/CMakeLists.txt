add_library(pac-rfexplorer-3gp-iot INTERFACE)

target_sources(pac-rfexplorer-3gp-iot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFESweepData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFExplorer_3GP_IoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFEConfiguration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFEUtilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/ByteBuffer_RFE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/ErrorCodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFExplorer_3GP_IoT.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/ByteBuffer_RFE.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFEUtilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFEConfiguration.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/CommonValues.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFExplorer_3GP_IoT_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src/RFESweepData.h"
)

target_include_directories(pac-rfexplorer-3gp-iot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RFExplorer_3GP_IoT_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rfexplorer-3gp-iot INTERFACE
    arduino-compat
)
