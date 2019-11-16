#include "tpa_poco_cppunit_main.h"

#include "CppUnit/TestSuite.h"
#include "CppUnit/Test.h"
#include "CppUnit/TestRunner.h"

#include <string>


namespace jmsd {
namespace tpa {
namespace poco {


int tpa_poco_cppunit_main(
	int const argc,
	char const *const argv[],
	::std::vector< ::CppUnit::Test * > const &test_suite_list )
{
	::std::vector< ::std::string > program_arguments;
	{
		size_t const argument_quantity = argc < 0 ? 0 : argc;

		for ( size_t argument_index = 0; argument_index < argument_quantity; ++argument_index ) {
			program_arguments.push_back( ::std::string( argv[ argument_index ] ) );
		}
	}

	::CppUnit::TestSuite *poco_test_suite = new ::CppUnit::TestSuite( "Poco C++ test suite" );

	for ( auto the_suite : test_suite_list ) {
		poco_test_suite->addTest( the_suite );
	}

	::CppUnit::TestRunner test_runner;
	test_runner.addTest( poco_test_suite->toString(), poco_test_suite );
	return test_runner.run( program_arguments ) ? 0 : 1;
}


} // namespace poco
} // namespace tpa
} // namespace jmsd




