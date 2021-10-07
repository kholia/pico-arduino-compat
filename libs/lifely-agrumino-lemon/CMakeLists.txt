add_library(pac-lifely-agrumino-lemon INTERFACE)

target_sources(pac-lifely-agrumino-lemon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/Agrumino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP9800/MCP9800.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/PCA9536/PCA9536.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/PCA9536/utility/PCA9536_PString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP3221/MCP3221.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP3221/utility/MCP3221_PString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/Agrumino.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP9800/MCP9800Reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP9800/MCP9800.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/PCA9536/PCA9536.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/PCA9536/utility/PCA9536ComStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/PCA9536/utility/PCA9536InfoStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/PCA9536/utility/PCA9536_PString.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP3221/MCP3221.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP3221/utility/MCP3221InfoStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP3221/utility/MCP3221_PString.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/libraries/MCP3221/utility/MCP3221ComStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries/examples/Diagnostics/AgruminoLemonTesting/logo.h"
)

target_include_directories(pac-lifely-agrumino-lemon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/agruminoLemon-libraries"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lifely-agrumino-lemon INTERFACE
    arduino-compat
)
