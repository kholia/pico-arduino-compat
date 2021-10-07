add_library(pac-fabo-204-baromter-mpl115a2 INTERFACE)

target_sources(pac-fabo-204-baromter-mpl115a2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBarometer-MPL115-Library/src/FaBoBarometer_MPL115.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBarometer-MPL115-Library/src/FaBoBarometer_MPL115.h"
)

target_include_directories(pac-fabo-204-baromter-mpl115a2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoBarometer-MPL115-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-204-baromter-mpl115a2 INTERFACE
    arduino-compat
)
