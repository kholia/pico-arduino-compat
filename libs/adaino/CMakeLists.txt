add_library(pac-adaino INTERFACE)

target_sources(pac-adaino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/Adaino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/SAMD21_ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/ADCBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/Adaino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/ADCBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/SAMD21_ADC.h"
)

target_include_directories(pac-adaino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adaino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adaino INTERFACE
    arduino-compat
)
