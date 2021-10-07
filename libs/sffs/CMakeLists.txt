add_library(pac-sffs INTERFACE)

target_sources(pac-sffs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Simple_FRAM_FileSystem/SFFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simple_FRAM_FileSystem/io_driver_spi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simple_FRAM_FileSystem/io_driver_i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simple_FRAM_FileSystem/SFFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Simple_FRAM_FileSystem/io_driver.h"
)

target_include_directories(pac-sffs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Simple_FRAM_FileSystem"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sffs INTERFACE
    arduino-compat
)
