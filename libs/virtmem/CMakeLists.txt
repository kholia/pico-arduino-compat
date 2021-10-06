add_library(virtmem INTERFACE)

target_sources(virtmem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/base_alloc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/vptr_utils.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/serial_utils.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/virtmem.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/base_vptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/serial_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/vptr_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/vptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/internal/base_alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/config/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/alloc/static_alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/alloc/stdio_alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/alloc/spiram_alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/alloc/serial_alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src/alloc/sd_alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/examples/benchmark/benchmark.h"
)

target_include_directories(virtmem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/virtmem-arlibman/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(virtmem INTERFACE
    arduino-compat
)
