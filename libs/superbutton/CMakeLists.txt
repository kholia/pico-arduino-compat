add_library(superbutton INTERFACE)

target_sources(superbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/SuperButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/SuperButton.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/Buttonkey.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/Countdown.hpp"
)

target_include_directories(superbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SuperButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(superbutton INTERFACE
    arduino-compat
)
