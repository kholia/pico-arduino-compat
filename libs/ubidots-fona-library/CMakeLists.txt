add_library(ubidots-fona-library INTERFACE)

target_sources(ubidots-fona-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ubidots-FONA/src/UbidotsFONA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ubidots-FONA/src/UbidotsFONA.h"
)

target_include_directories(ubidots-fona-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ubidots-FONA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ubidots-fona-library INTERFACE
    arduino-compat
)
