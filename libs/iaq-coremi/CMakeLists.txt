add_library(iaq-coremi INTERFACE)

target_sources(iaq-coremi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iaq-coremi/src/iAQCoreTwoWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iaq-coremi/src/iAQCoreMI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iaq-coremi/src/iAQCoreI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iaq-coremi/src/iAQCoreTwoWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/iaq-coremi/src/iAQCoreI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/iaq-coremi/src/iAQCoreMI.h"
)

target_include_directories(iaq-coremi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iaq-coremi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iaq-coremi INTERFACE
    arduino-compat
)
