add_library(pac-ttn_m5stack INTERFACE)

target_sources(pac-ttn_m5stack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TTN_M5Stack/src/TTN_CayenneLPP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TTN_M5Stack/src/TTN_M5Stack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TTN_M5Stack/src/TTN_CayenneLPP.h"
  "${CMAKE_CURRENT_LIST_DIR}/TTN_M5Stack/src/TTN_M5Stack.h"
)

target_include_directories(pac-ttn_m5stack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TTN_M5Stack/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ttn_m5stack INTERFACE
    arduino-compat
)
