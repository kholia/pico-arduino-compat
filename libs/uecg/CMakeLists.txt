add_library(uecg INTERFACE)

target_sources(uecg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uECG_library/src/uECG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uECG_library/src/uECG.h"
)

target_include_directories(uecg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uECG_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uecg INTERFACE
    arduino-compat
)
