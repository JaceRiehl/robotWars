#ifndef MECHTEST_H
#define MECHTEST_H
#include "Parts.h"
#include "Mech.h"
#include "MechBuilder.h"
#include "Aggressive.h"
#include "Programming.h"

#include <cppunit/extensions/HelperMacros.h>

class MechTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( MechTest );
    CPPUNIT_TEST( testConstructor);
    CPPUNIT_TEST( testAddWeapons );
    CPPUNIT_TEST( testAttack );
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
    /**
    *Tests that the weapons are being added correctly
    */
    void testAddWeapons();
    /**
    *Tests that the Mech is able to call atatck correctly
    */
    void testAttack();



private:
     Parts* p1;
     Parts* p2;
     Parts* p3;
     Parts* p4;
     Parts* p5;
     Programming* s;
};

#endif


