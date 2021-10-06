add_library(ctc-go-core INTERFACE)

target_sources(ctc-go-core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CTC-Go-Core-Module/src/CTC_GO_Core_Module.h"
)

target_include_directories(ctc-go-core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CTC-Go-Core-Module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ctc-go-core INTERFACE
    arduino-compat
)
