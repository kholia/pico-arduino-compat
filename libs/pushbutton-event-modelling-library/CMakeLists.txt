add_library(pushbutton-event-modelling-library INTERFACE)

target_sources(pushbutton-event-modelling-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PushButtonClicks/PushButtonClicks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PushButtonClicks/PushButtonClicks.h"
)

target_include_directories(pushbutton-event-modelling-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PushButtonClicks"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pushbutton-event-modelling-library INTERFACE
    arduino-compat
)
