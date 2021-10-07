add_library(pac-avr_stl INTERFACE)

target_sources(pac-avr_stl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/eh_alloc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/new_opnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/iomanip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/exception.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/map.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/associative_base.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/list.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/limits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/sstream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/new_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/queue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/eh_globals.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/ios.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/del_opvs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/new_opv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/char_traits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/deque.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/stack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/func_exception.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/ostream_helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/locale.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/istream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/iostream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/complex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/valarray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/del_opv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/del_ops.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/del_opnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/iterator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/new_op.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/string.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/del_opvnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/set.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/bitset.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/ArduinoSTL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/del_op.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/vector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/streambuf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/new_opvnt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/typeinfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/ostream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/stdexcept.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/numeric.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/utility.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/algorithm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/abi/abi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/ArduinoSTL.h"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/system_configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/unwind-cxx.h"
  "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src/avr_stl.h"
)

target_include_directories(pac-avr_stl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avr_stl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-avr_stl INTERFACE
    arduino-compat
)
