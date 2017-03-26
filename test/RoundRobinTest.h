#ifndef ROUNDROBINTEST_H
#define ROUNDROBINTEST_H
#include "RoundRobin.h"
#include "Parts.h"
#include "PartsFactory.h"
#include <vector>

#include <cppunit/extensions/HelperMacros.h>
/**
*RoundRobin behaviour test
*/
class RoundRobinTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( RoundRobinTest );
    CPPUNIT_TEST( testDamage);
    CPPUNIT_TEST( testRefreshRate );
    CPPUNIT_TEST( testRechargeUpdate);

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
    /**
    *Tests that the recharge times are being updates
    */
    void testRechargeUpdate();



    private:
        Parts* p1;
        Parts* p2;
        Parts* p3;
        RoundRobin strategy;
        vector<Parts*> parts;
};

#endif
