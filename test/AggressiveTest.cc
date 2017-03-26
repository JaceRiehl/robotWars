#include "AggressiveTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( AggressiveTest );

    void AggressiveTest::setUp()
    {
        p1 = new Parts(3,5);
        p2 = new Parts(6,10);
        p3 = new Parts(12,20);
        parts.push_back(p1);
        parts.push_back(p2);
        parts.push_back(p3);
    }

	void AggressiveTest::tearDown()
    {


    }

    void AggressiveTest::testDamage()
    {
         CPPUNIT_ASSERT_EQUAL(12, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(6, strategy.attack(parts));
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
    }

    void AggressiveTest::testRefreshRate()
    {
         CPPUNIT_ASSERT_EQUAL(12, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(6, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
         strategy.updateRecharge();

    }

    void AggressiveTest::updateRechargeTest()
    {
        CPPUNIT_ASSERT_EQUAL(12, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(6, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(0, strategy.attack(parts));
         strategy.updateRecharge();
         CPPUNIT_ASSERT_EQUAL(3, strategy.attack(parts));
         strategy.updateRecharge();
    }

