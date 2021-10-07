add_library(pac-plen5stack INTERFACE)

target_sources(pac-plen5stack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PLEN5Stack/src/PLEN5Stack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PLEN5Stack/examples/PLEN_ENV/DHT12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PLEN5Stack/src/PLEN5Stack.h"
  "${CMAKE_CURRENT_LIST_DIR}/PLEN5Stack/examples/PLEN_ENV/DHT12.h"
  "${CMAKE_CURRENT_LIST_DIR}/PLEN5Stack/examples/Plen5Connect/webpage.h"
)

target_include_directories(pac-plen5stack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PLEN5Stack/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-plen5stack INTERFACE
    arduino-compat
)
