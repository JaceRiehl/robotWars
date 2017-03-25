#ifndef ROUNDROBINTEST_H
#define ROUNDROBINTEST_H
#include "RoundRobin.h"
#include "Parts.h"
#include "PartsFactory.h"
#include <vector>

#include <cppunit/extensions/HelperMacros.h>

class RoundRobinTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( RoundRobinTest );
    CPPUNIT_TEST( testDamage);
    CPPUNIT_TEST( testRefreshRate );

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
    * Tests that the damage rates are working correctly
    */
    void testDamage();
    /**
    * Tests that the refresh rates are working correctly
    */
    void testRefreshRate();


    private:
        PartsFactory Factory;
        RoundRobin strategy;
        vector<Parts> parts;
};

#endif // TESTCOORDINATE_H
