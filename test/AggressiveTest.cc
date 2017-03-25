#include "AggressiveTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( AggressiveTest );

    void AggressiveTest::setUp()
    {
        Parts p1(3,5);
        Parts p2(6,10);
        Parts p3(12,20);
        parts.push_back(p1);
        parts.push_back(p2);
        parts.push_back(p3);
    }

	void AggressiveTest::tearDown()
    {


    }

    void AggressiveTest::testDamage()
    {
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(6, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(12, strategy.attack(parts));
    }

    void AggressiveTest::testRefreshRate()
    {
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(6, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(12, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(6, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));

    }

