add_library(pac-coap-simple-library INTERFACE)

target_sources(pac-coap-simple-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CoAP-simple-library/coap-simple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoAP-simple-library/coap-simple.h"
)

target_include_directories(pac-coap-simple-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CoAP-simple-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-coap-simple-library INTERFACE
    arduino-compat
)
