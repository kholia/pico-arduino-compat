add_library(pac-globalcovfefe INTERFACE)

target_sources(pac-globalcovfefe INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/src/GlobalCovfefe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/src/GlobalCovfefeLearner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/src/GlobalCovfefe.h"
  "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/src/GlobalCovfefeLearner.h"
  "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/src/version/version.h"
  "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/examples/SerialCovfefe/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/examples/GlobalCovfefe/config.h"
)

target_include_directories(pac-globalcovfefe INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GlobalCovfefe/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-globalcovfefe INTERFACE
    arduino-compat
)
