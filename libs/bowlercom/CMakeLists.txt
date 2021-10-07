add_library(pac-bowlercom INTERFACE)

target_sources(pac-bowlercom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/PinFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/EEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerCom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Platform/include/arch/Arduino/IOAbstraction.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_neuronrobotics_dyio.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Abstract_bcs_io_setmode.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Bcs_IO_AdvancedAsync.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_bcs_pid_dypid.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Scheduler.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerPacketParser.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/AbstractPID.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/PidAsync.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/PidRpc.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Abstract_bcs_io.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Debug_DyIO.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_bcs_io.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Bowler_Server.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Debug.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/PID.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_bcs_pid.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/PidHysteresis.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_bcs_safe.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_bcs_io_setmode.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_bcs_core.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/FIFO.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/PidVelocity.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Namespace_bcs_rpc.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Bowler_Helper.c"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerCom.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Namespace/Namespace_bcs_io.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Namespace/AsyncManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Namespace/Namespace_bcs_io_setmode.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/DyIO/BOLWER_EEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/DyIO/ChannelMode.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/DyIO/DyIO_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/DyIO/ChannelValues.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/DyIO/Debug_DyIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/DyIO/PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/RPC_Process.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/FIFO.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Bowler_Helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Namespace_bcs_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Bowler_Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Bowler.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/BowlerRPCRegestration.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/BowlerServerHardwareAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/BowlerTransport.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/AbstractPID.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/BowlerStack/include/Bowler/Bowler_Struct_Def.h"
  "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src/Platform/include/arch/Arduino/BowlerConfig.h"
)

target_include_directories(pac-bowlercom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BowlerCom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bowlercom INTERFACE
    arduino-compat
)
