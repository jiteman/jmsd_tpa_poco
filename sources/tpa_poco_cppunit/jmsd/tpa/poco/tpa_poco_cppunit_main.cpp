#include "tpa_poco_cppunit_main.h"

#include "CppUnit/TestSuite.h"
#include "CppUnit/TestRunner.h"

#include <string>


namespace jmsd {
namespace tpa {
namespace poco {


int tpa_poco_cppunit_main(
	int /*arc*/,
	char const *const /*argv*/ [],
	::std::vector< ::std::shared_ptr< ::CppUnit::TestSuite > > const &test_suite_list ) {

	::CppUnit::TestSuite *poco_test_suite = new ::CppUnit::TestSuite( "Poco C++ test suite" );

	for ( auto the_suite : test_suite_list ) {
		poco_test_suite->addTest( the_suite.get() );
	}

	::CppUnit::TestRunner test_runner;
	test_runner.addTest( poco_test_suite->toString(), poco_test_suite );
	test_runner.run( ::std::vector< ::std::string >() );

	return 0;
}


} // namespace poco
} // namespace tpa
} // namespace jmsd




