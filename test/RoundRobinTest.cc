#include "RoundRobinTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( RoundRobinTest );

    void RoundRobinTest::setUp()
    {
        p1 = new Parts(2,3);
        p2 = new Parts(4,6);
        p3 = new Parts(8,12);
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

