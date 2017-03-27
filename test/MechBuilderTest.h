#ifndef MECHBUILDERTEST_H
#define MECHBUILDERTEST_H
#include "Parts.h"
#include "Mech.h"
#include "MechBuilder.h"
#include "RoundRobin.h"
#include<string>

#include <cppunit/extensions/HelperMacros.h>
using namespace std;
/**
*Test for mech builder
*/
class MechBuilderTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( MechBuilderTest );
    CPPUNIT_TEST( testConstructor );
    CPPUNIT_TEST_SUITE_END();

    public:
    /**
    * Sets up the Test values
    */
    void setUp();
    /**
    * Destructor for window
    */
    void tearDown();
    /**
    *Tests that the value from the constructors is being properly assigned
    */
    void testConstructor();



    private:
    Programming* s;
};

#endif

