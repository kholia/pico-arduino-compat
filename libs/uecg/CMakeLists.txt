add_library(pac-uecg INTERFACE)

target_sources(pac-uecg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uECG_library/src/uECG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uECG_library/src/uECG.h"
)

target_include_directories(pac-uecg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uECG_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-uecg INTERFACE
    arduino-compat
)
