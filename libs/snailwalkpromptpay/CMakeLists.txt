add_library(pac-snailwalkpromptpay INTERFACE)

target_sources(pac-snailwalkpromptpay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SnailwalkPromptpay/SnailwalkPromptpay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SnailwalkPromptpay/SnailwalkPromptpay.h"
)

target_include_directories(pac-snailwalkpromptpay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SnailwalkPromptpay"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-snailwalkpromptpay INTERFACE
    arduino-compat
)
