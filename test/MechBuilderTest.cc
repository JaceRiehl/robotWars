#include "MechBuilderTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( MechBuilderTest );

    void MechBuilderTest::setUp()
    {
       s = new RoundRobin();
    }

	void MechBuilderTest::tearDown()
    {
        delete s;

    }

    void MechBuilderTest::testConstructor()
    {
       string strat = "RoundRobin";
       Mech::MechBuilder b(s);
       b.setMediumMech();
       CPPUNIT_ASSERT_EQUAL(4, b.getArms());
       CPPUNIT_ASSERT_EQUAL(2, b.getLegs());
       CPPUNIT_ASSERT_EQUAL(strat, b.getStrategy());
       CPPUNIT_ASSERT_EQUAL(25, b.getArmor());

    }


