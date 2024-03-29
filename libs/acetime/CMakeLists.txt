add_library(pac-acetime INTERFACE)

target_sources(pac-acetime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/LocalDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/LocalTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/LocalDate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/TimePeriod.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/BasicZone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/OffsetDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/TimeOffset.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ExtendedZone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/TimeZone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ZoneProcessor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ZonedDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/BasicBrokers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/BrokerCommon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/ExtendedBrokers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedb/zone_infos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedb/zone_policies.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedb/zone_registry.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/TestableClockInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/common/DateStrings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/common/compat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/NtpClock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/Stm32F1Rtc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/HardwareDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/DS3231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/StmRtc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedbx/zone_infos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedbx/zone_policies.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedbx/zone_registry.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/examples/AutoBenchmark/Benchmark.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/examples/AutoBenchmark/zone_registry.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/examples/ComparisonBenchmark/Benchmark.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/tests/ExtendedZoneProcessorTransitionTest/EuropeLisbon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/AceTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/TimePeriod.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/TimeZone.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/local_date_mutation.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ExtendedZone.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/TimeZoneData.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ZoneManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/LocalDate.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ZonedDateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zoned_date_time_mutation.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ExtendedZoneProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/BasicZone.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/TimeOffset.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/time_period_mutation.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ZoneProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/LocalDateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/BasicZoneProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/LocalTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/OffsetDateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/time_offset_mutation.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/ZoneProcessorCache.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/ZoneContext.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/LinkRegistrar.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/ZoneRegistrar.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/ZoneInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/BrokerCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/BasicBrokers.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/ExtendedBrokers.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/LinkEntry.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/internal/ZonePolicy.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedb/zone_registry.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedb/zone_infos.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedb/zone_policies.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/ValidationScope.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/TestableSystemClockCoroutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/ValidationDataType.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/TestableClockInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/BasicTransitionTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/TestableSystemClockLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/ExtendedTransitionTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/testing/FakeClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/common/DateStrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/common/logging.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/common/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/common/compat.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/NtpClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/SystemClockCoroutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/SystemClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/Stm32F1Clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/DS3231Clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/UnixClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/StmRtcClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/Clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/clock/SystemClockLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/Stm32F1Rtc.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/HardwareDateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/DS3231Module.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/StmRtc.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/DS3231.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/ClockInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/hw/HardwareTemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedbx/zone_registry.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedbx/zone_infos.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/src/ace_time/zonedbx/zone_policies.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/examples/AutoBenchmark/zone_registry.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/examples/AutoBenchmark/Benchmark.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/examples/ComparisonBenchmark/Benchmark.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTime/tests/ExtendedZoneProcessorTransitionTest/EuropeLisbon.h"
)

target_include_directories(pac-acetime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acetime INTERFACE
    arduino-compat
)
