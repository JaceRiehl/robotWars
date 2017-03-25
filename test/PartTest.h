#ifndef PARTTEST_H
#define PARTTEST_H
#include "Parts.h"

#include <cppunit/extensions/HelperMacros.h>

class PartTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( PartTest );
    CPPUNIT_TEST( testConstructor);
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
       Parts* p1;
       Parts* p2;
       Parts* p3;
};

#endif // TESTCOORDINATE_H

