#include "tpa_poco_test_main.h"

#include "jmsd/tpa/poco/tpa_poco_cppunit_main.h"

#include "CppUnit/TestSuite.h"

#include <vector>
#include <memory>


namespace jmsd {
namespace tpa {
namespace poco {


int tpa_poco_test_main( int const argc, char const *const argv[] ) {
	return tpa_poco_cppunit_main( argc, argv, ::std::vector< ::std::shared_ptr< ::CppUnit::TestSuite > >() );
}


} // namespace poco
} // namespace tpa
} // namespace jmsd
