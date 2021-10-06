add_library(petrinetlib INTERFACE)

target_sources(petrinetlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PetriNet/src/PetriNetLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PetriNet/src/PetriNetLib.h"
)

target_include_directories(petrinetlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-PetriNet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(petrinetlib INTERFACE
    arduino-compat
)
