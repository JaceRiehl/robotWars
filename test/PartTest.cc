#include "PartTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( PartTest );

    void PartTest::setUp()
    {
        p1 = new Parts(2,3);
        p2 = new Parts(4,6);
        p3 = new Parts(8,12);
    }

	void PartTest::tearDown()
    {
        delete p1;
        delete p2;
        delete p3;

    }

    void PartTest::testConstructor()
    {
        CPPUNIT_ASSERT_EQUAL(2, p1->getDamage());
        CPPUNIT_ASSERT_EQUAL(4, p2->getDamage());
        CPPUNIT_ASSERT_EQUAL(8, p3->getDamage());
        CPPUNIT_ASSERT_EQUAL(3, p1->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(6, p2->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(12, p3->getRechargeTime());
    }

