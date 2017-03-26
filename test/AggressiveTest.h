#ifndef AGGRESSIVETEST_H
#define AGGRESSIVETEST_H
#include "Aggressive.h"
#include "Parts.h"
#include <vector>

#include <cppunit/extensions/HelperMacros.h>
/**
*Aggesstive Behaviour Test
*/
class AggressiveTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( AggressiveTest );
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
        Parts* p1;
        Parts* p2;
        Parts* p3;
        Aggressive strategy;
        vector<Parts*> parts;
};

#endif
