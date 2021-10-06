add_library(sixfab_nbiot INTERFACE)

target_sources(sixfab_nbiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_NBIoT_Shield/Sixfab_MMA8452Q.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_NBIoT_Shield/Sixfab_HDC1080.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_NBIoT_Shield/Sixfab_NBIoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_NBIoT_Shield/Sixfab_NBIoT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_NBIoT_Shield/Sixfab_MMA8452Q.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_NBIoT_Shield/Sixfab_HDC1080.h"
)

target_include_directories(sixfab_nbiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_NBIoT_Shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sixfab_nbiot INTERFACE
    arduino-compat
)
