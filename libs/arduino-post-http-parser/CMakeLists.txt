add_library(arduino-post-http-parser INTERFACE)

target_sources(arduino-post-http-parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-POST-HTTP-Parser/postParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-POST-HTTP-Parser/examples/RGB_Control/postParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-POST-HTTP-Parser/examples/Light_Switch/postParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-POST-HTTP-Parser/postParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-POST-HTTP-Parser/examples/RGB_Control/postParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-POST-HTTP-Parser/examples/Light_Switch/postParser.h"
)

target_include_directories(arduino-post-http-parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-POST-HTTP-Parser"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-post-http-parser INTERFACE
    arduino-compat
)
