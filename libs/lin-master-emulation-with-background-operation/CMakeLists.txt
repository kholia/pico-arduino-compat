add_library(pac-lin-master-emulation-with-background-operation INTERFACE)

target_sources(pac-lin-master-emulation-with-background-operation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master0.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master2.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master3.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master1.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src/LIN_master.h"
)

target_include_directories(pac-lin-master-emulation-with-background-operation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LIN_master_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lin-master-emulation-with-background-operation INTERFACE
    arduino-compat
)
