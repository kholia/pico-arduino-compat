add_library(vanbus INTERFACE)

target_sources(vanbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VanBus/VanBusRx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VanBus/VanBusTx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VanBus/VanBus.h"
  "${CMAKE_CURRENT_LIST_DIR}/VanBus/VanBusTx.h"
  "${CMAKE_CURRENT_LIST_DIR}/VanBus/VanBusRx.h"
  "${CMAKE_CURRENT_LIST_DIR}/VanBus/examples/LiveWebPage/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/VanBus/examples/LiveWebPage/VanIden.h"
)

target_include_directories(vanbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VanBus"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vanbus INTERFACE
    arduino-compat
)
