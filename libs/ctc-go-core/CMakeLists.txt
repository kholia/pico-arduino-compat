add_library(pac-ctc-go-core INTERFACE)

target_sources(pac-ctc-go-core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CTC-Go-Core-Module/src/CTC_GO_Core_Module.h"
)

target_include_directories(pac-ctc-go-core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CTC-Go-Core-Module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ctc-go-core INTERFACE
    arduino-compat
)
