add_library(pac-lora-serialization INTERFACE)

target_sources(pac-lora-serialization INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/Benchmark/StringificationBench.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/Benchmark/BenchMain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ConditionTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/GeneratorTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/MessageTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/TagAliasTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/MatchersTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ToStringPair.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/PartTrackerTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/BDDTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/TestMain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ToStringGeneralTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/CmdLineTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ClassTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/EnumToString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/CompilationTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ApproxTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ExceptionTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ToStringTuple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/VariadicMacrosTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/MiscTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/TrickyTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ToStringWhich.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/ToStringVector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_runner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_registry_hub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_option.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_reporter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_xmlwriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_ptr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_exception.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_debugger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_testcase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_test_spec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_generators.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_test_case_tracker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_console_colour.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_interfaces_capture.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/projects/SelfTest/SurrogateCpps/catch_streambuf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/src/LoraEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/src/LoraMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/catch_with_main.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/catch_session.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_default_main.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_totals.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_commandline.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_test_spec.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_version.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_ptr.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_debugger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_objc_arc.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_option.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_xmlwriter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_matchers.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_tostring.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_approx.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_test_spec_parser.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_console_colour_impl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_reporter_registrars.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_run_context.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_assertionresult.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_objc.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_message.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_notimplemented_exception.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_matchers_string.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_config.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_context_impl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_section_info.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_impl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_section.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_fatal_condition.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_test_case_tracker.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_result_builder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_generators.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_console_colour.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_legacy_reporter_adapter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_type_traits.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_tag_alias_registry.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_registry_hub.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_generators_impl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_wildcard_pattern.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_exception_translator_registry.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_common.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_test_registry.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_reporter_registry.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_evaluate.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_capture.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_test_case_registry_impl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_stream.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_list.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_test_case_info.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_expression_lhs.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_xml.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_junit.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_compact.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_teamcity.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_automake.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_tap.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_multi.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_console.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/reporters/catch_reporter_bases.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/single_include/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/main.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_matchers_string.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_notimplemented_exception.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_message.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_tostring.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_reporter.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_text.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_context.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_tag_alias_registry.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_windows_h_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_matchers_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_section.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_generators.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_legacy_reporter_adapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_reenable_warnings.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_result_type.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_assertionresult.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_tag_alias_registry.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_registry_hub.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_compiler_capabilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_testcase.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_result_builder.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_debugger.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_clara.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_section_info.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_test_case_info.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_suppress_warnings.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_capture.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_streambuf.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_tag_alias.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_exception.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_interfaces_runner.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/internal/catch_version.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/external/tbc_text_format.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/test/lib/Catch/include/external/clara.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/src/LoraMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/src/LoraEncoder.h"
)

target_include_directories(pac-lora-serialization INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lora-serialization/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lora-serialization INTERFACE
    arduino-compat
)
