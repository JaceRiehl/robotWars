#include "RoundRobinTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( RoundRobinTest );

    void RoundRobinTest::setUp()
    {
        Parts p1(2,3);
        Parts p2(4,6);
        Parts p3(8,12);
        parts.push_back(p1);
        parts.push_back(p2);
        parts.push_back(p3);
    }

	void RoundRobinTest::tearDown()
    {


    }

    void RoundRobinTest::testDamage()
    {
         CPPUNIT_ASSERT_EQUAL(2, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(4, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(8, strategy.attack(parts));
    }

    void RoundRobinTest::testRefreshRate()
    {
         CPPUNIT_ASSERT_EQUAL(2, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(4, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(8, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(2, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(2, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(4, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(2, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(2, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(4, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(8, strategy.attack(parts));
    }

