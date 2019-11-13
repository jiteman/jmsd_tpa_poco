#pragma once


#include <vector>
#include <memory>


#include "tpa_poco_cppunit.h"


namespace CppUnit {
	class TestSuite;
} // namespabe CppUnit


namespace jmsd {
namespace tpa {
namespace poco {


int JMSD_TPA_POCO_CPPUNIT_TEMPLATE_SHARED_INTERFACE tpa_poco_cppunit_main(
	int const arc,
	char const *const argv[],
	::std::vector< ::std::shared_ptr< ::CppUnit::TestSuite > > const &test_suite_list );


} // namespace poco
} // namespace tpa
} // namespace jmsd



