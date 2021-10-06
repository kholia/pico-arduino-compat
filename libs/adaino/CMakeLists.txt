add_library(adaino INTERFACE)

target_sources(adaino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/Adaino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/SAMD21_ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/ADCBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/Adaino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/ADCBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adaino/src/ada/SAMD21_ADC.h"
)

target_include_directories(adaino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adaino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adaino INTERFACE
    arduino-compat
)
