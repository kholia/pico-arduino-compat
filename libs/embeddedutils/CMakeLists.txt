add_library(pac-embeddedutils INTERFACE)

target_sources(pac-embeddedutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/detail/Vec4f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/detail/Vec3f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/detail/Vec2f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/EmbeddedUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/Helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/I2CHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/MatrixFunc.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/Calculus.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/Filters.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/Vec.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/Convert.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/Gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/RingQueue.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/avr/Calculus.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/avr/Filters.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/avr/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/avr/Convert.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/avr/Gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/avr/RingQueue.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/detail/Vec3f.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/detail/Vec2f.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/detail/Macro.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils/lib/detail/Vec4f.h"
)

target_include_directories(pac-embeddedutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmbeddedUtils"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-embeddedutils INTERFACE
    arduino-compat
)
