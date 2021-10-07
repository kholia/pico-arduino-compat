add_library(pac-lithium-powered INTERFACE)

target_sources(pac-lithium-powered INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LithiumPowered/src/LithiumPowered.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LithiumPowered/examples/BasicDemo/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LithiumPowered/src/LithiumPowered.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LithiumPowered/src/LithiumStorage.hpp"
)

target_include_directories(pac-lithium-powered INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LithiumPowered/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lithium-powered INTERFACE
    arduino-compat
)
