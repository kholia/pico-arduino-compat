add_library(pac-plaquette INTERFACE)

target_sources(pac-plaquette INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Ramp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/TriOsc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/StreamIn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_random.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Chrono.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/OscilloscopeOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Thresholder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/StreamOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqInputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/MovingStats.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/SquareOsc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_lerp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/MinMaxScaler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/MovingAverage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_map_real.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqCore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Metro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/AbstractTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/SineOsc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/SimpleStats.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Normalizer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqOutputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Smoother.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Stats.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/AdaptiveNormalizer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqInputs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/SineOsc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/TriOsc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Chrono.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/OscilloscopeOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/SimpleStats.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/MovingAverage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/StreamOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqExtra.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_trig8.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_lerp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Thresholder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PlaquetteLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/AbstractTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/AdaptiveNormalizer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/SquareOsc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/MinMaxScaler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Metro.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_map_real.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Normalizer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/MovingStats.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Stats.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Ramp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/StreamIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Plaquette.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/PqOutputs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_print.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_random.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/pq_time.h"
  "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src/Smoother.h"
)

target_include_directories(pac-plaquette INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Plaquette/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-plaquette INTERFACE
    arduino-compat
)
