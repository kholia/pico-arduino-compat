add_library(pac-superbutton INTERFACE)

target_sources(pac-superbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/SuperButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/SuperButton.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/Buttonkey.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SuperButton/Countdown.hpp"
)

target_include_directories(pac-superbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SuperButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-superbutton INTERFACE
    arduino-compat
)
