#ifndef MECHTURNTEST_H
#define MECHTURNTEST_H
#include "Parts.h"
#include "Mech.h"
#include "MechBuilder.h"
#include "Turn.h"
#include "Aggressive.h"
#include "MechTurn.h"
#include<string>

#include <cppunit/extensions/HelperMacros.h>
using namespace std;
/**
*Test for MechTurn
*/
class MechTurnTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( MechTurnTest );
    CPPUNIT_TEST( testTakeTurn );
    CPPUNIT_TEST( testEndTurn );
    CPPUNIT_TEST( testInitalize );
    CPPUNIT_TEST( testRunTurn );
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
    void testEndTurn();
    /**
    *
    */
    void testInitalize();
    /**
    *Tests that the turn is being executed correctly
    */
    void testTakeTurn();
    /**
    *Tests that everything is working together
    */
    void testRunTurn();


    private:
     Parts* p1;
     Parts* p2;
     Parts* p3;
     Parts* p4;
     Programming* s;
     Programming* s1;
};

#endif

