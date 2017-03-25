#include "PartsFactoryTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( PartsFactoryTest );

    void PartsFactoryTest::setUp()
    {
        p1 = new Parts(2,3);
        p2 = new Parts(4,6);
        p3 = new Parts(8,12);
        Parts* c1 = factory.getPart(PartsFactory::Type::SMALL_LASER);
        Parts* c2 = factory.getPart(PartsFactory::Type::MEDIUM_LASER);
        Parts* c3 = factory.getPart(PartsFactory::Type::LARGE_LASER);
    }

	void PartsFactoryTest::tearDown()
    {
        delete p1;
        delete p2;
        delete p3;

    }

    void PartsFactoryTest::testGetPart()
    {
        Parts* c1 = factory.getPart(PartsFactory::Type::SMALL_LASER);
        Parts* c2 = factory.getPart(PartsFactory::Type::MEDIUM_LASER);
        Parts* c3 = factory.getPart(PartsFactory::Type::LARGE_LASER);

        CPPUNIT_ASSERT_EQUAL(p1->getDamage(), c1->getDamage());
        CPPUNIT_ASSERT_EQUAL(p2->getDamage(), c2->getDamage());
        CPPUNIT_ASSERT_EQUAL(p3->getDamage(), c3->getDamage());
        CPPUNIT_ASSERT_EQUAL(p1->getRechargeTime(), c1->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(p2->getRechargeTime(), c2->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(p3->getRechargeTime(), c3->getRechargeTime());
        delete c1;
        delete c2;
        delete c3;
    }


