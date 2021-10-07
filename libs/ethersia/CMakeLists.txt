add_library(pac-ethersia INTERFACE)

target_sources(pac-ethersia INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/TFTPServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/PingClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/MACAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/Syslog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/IPv6Packet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/Socket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/IPv6Address.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/w5500.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/EtherSia.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/UDPSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/TCPServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/LinuxSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/enc28j60.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/dummy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/HTTPServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/icmp6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/examples/LinuxPacketPrinter/LinuxPacketPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/ipv6checksum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/hext.c"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/TCPServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/dummy.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/tcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/UDPSocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/Socket.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/PingClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/IPv6Address.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/util.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/MACAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/Syslog.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/w5500.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/ICMPv6Packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/TFTPServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/IPv6Packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/EtherSia.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/esendian.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/LinuxSocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/HTTPServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src/enc28j60.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/examples/SNTPClient/ntp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/examples/TFTPServer/CustomTFTPServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/hext.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Print.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Progmem.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherSia/tests/libarduino/Arduino.h"
)

target_include_directories(pac-ethersia INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EtherSia/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ethersia INTERFACE
    arduino-compat
)
