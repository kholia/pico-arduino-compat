add_library(pac-fabo-230-color-bh1749nuc INTERFACE)

target_sources(pac-fabo-230-color-bh1749nuc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoColor-BH1749NUC-Library/src/FaBoColor_BH1749NUC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoColor-BH1749NUC-Library/src/FaBoColor_BH1749NUC.h"
)

target_include_directories(pac-fabo-230-color-bh1749nuc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoColor-BH1749NUC-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-230-color-bh1749nuc INTERFACE
    arduino-compat
)
