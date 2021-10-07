add_library(pac-alternativelss INTERFACE)

target_sources(pac-alternativelss INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/LssCommunication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/LynxmotionLSS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/examples/LssUnitTests/LssTesting.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/aggregate.h"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/LssCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/LynxmotionLSS.h"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/LssCommunication.h"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/LssHandlers.h"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src/LynxmotionLSS-Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/examples/LssUnitTests/LssTesting.h"
)

target_include_directories(pac-alternativelss INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AlternativeLSS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-alternativelss INTERFACE
    arduino-compat
)
