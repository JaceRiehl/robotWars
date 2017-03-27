#ifndef PARTSFACTORYTEST_H
#define PARTSFACTORYTEST_H
#include "Parts.h"
#include "PartsFactory.h"

/**
*Test for the parts factory
*/

#include <cppunit/extensions/HelperMacros.h>

class PartsFactoryTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( PartsFactoryTest );
    CPPUNIT_TEST( testGetPart);
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
    void testGetPart();



private:
    PartsFactory* factory;
    Parts* p1;
    Parts* p2;
    Parts* p3;
    Parts* p4;
    Parts* p5;
    Parts* p6;

};

#endif //PARTSFACTORYTEST_H
