add_library(layad-circuits-saleng-gsm-shield INTERFACE)

target_sources(layad-circuits-saleng-gsm-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Saleng-GSM/LayadCircuits_SalengGSM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Saleng-GSM/LayadCircuits_SalengGSM.h"
)

target_include_directories(layad-circuits-saleng-gsm-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Saleng-GSM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(layad-circuits-saleng-gsm-shield INTERFACE
    arduino-compat
)
