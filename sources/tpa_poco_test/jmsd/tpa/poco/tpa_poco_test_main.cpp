#include "tpa_poco_test_main.h"

#include "jmsd/tpa/poco/tpa_poco_cppunit_main.h"

#include "FoundationTestSuite.h"
#include "CppUnit/Test.h"

#include <vector>


namespace jmsd {
namespace tpa {
namespace poco {


int tpa_poco_test_main( int const argc, char const *const argv[] ) {
	::std::vector< ::CppUnit::Test * > test_suite_list = {
		FoundationTestSuite::suite()
	};

	return tpa_poco_cppunit_main( argc, argv, test_suite_list );
}


} // namespace poco
} // namespace tpa
} // namespace jmsd
