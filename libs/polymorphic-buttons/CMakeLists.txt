add_library(pac-polymorphic-buttons INTERFACE)

target_sources(pac-polymorphic-buttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PolymorphicButtons/PMButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PolymorphicButtons/PMButton.h"
)

target_include_directories(pac-polymorphic-buttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PolymorphicButtons"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-polymorphic-buttons INTERFACE
    arduino-compat
)
