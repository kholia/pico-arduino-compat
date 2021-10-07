add_library(pac-ctc-go-motions INTERFACE)

target_sources(pac-ctc-go-motions INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CTC-Go-Motions-Expansion/src/CTC_GO_Motions_Expansion.h"
)

target_include_directories(pac-ctc-go-motions INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CTC-Go-Motions-Expansion/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ctc-go-motions INTERFACE
    arduino-compat
)
