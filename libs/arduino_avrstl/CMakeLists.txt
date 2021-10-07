add_library(pac-arduino_avrstl INTERFACE)

target_sources(pac-arduino_avrstl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/eh_alloc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/new_opnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/iomanip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/exception.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/map.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/associative_base.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/list.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/limits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/sstream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/new_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/queue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/eh_globals.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/ios.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/del_opvs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/new_opv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/char_traits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/deque.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/stack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/func_exception.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/ostream_helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/locale.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/istream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/iostream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/complex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/valarray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/del_opv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/del_ops.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/del_opnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/iterator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/new_op.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/string.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/del_opvnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/set.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/bitset.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/Arduino_AVRSTL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/del_op.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/vector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/streambuf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/new_opvnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/typeinfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/ostream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/stdexcept.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/numeric.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/utility.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/algorithm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/abi/abi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/system_configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/unwind-cxx.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src/Arduino_AVRSTL.h"
)

target_include_directories(pac-arduino_avrstl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_AVRSTL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_avrstl INTERFACE
    arduino-compat
)
