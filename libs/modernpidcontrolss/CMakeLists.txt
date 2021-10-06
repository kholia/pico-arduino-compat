add_library(modernpidcontrolss INTERFACE)

target_sources(modernpidcontrolss INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/dynsys/testsys_ss.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/pidkernel/PIDNet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/cplmfc/cplmfc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/cplmfc/filterFO_pass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/nlsig/nlsig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/ModernPIDControlSS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/helpers/fast_exps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/helpers/norm++kernel.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/dynsys/testsys_ss.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/pidkernel/PIDNet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/cplmfc/filterFO_pass.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/cplmfc/cplmfc.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src/nlsig/nlsig.h"
)

target_include_directories(modernpidcontrolss INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ModernPIDControlSS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(modernpidcontrolss INTERFACE
    arduino-compat
)
