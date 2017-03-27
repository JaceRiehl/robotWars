#include "PartsFactoryTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( PartsFactoryTest );

    void PartsFactoryTest::setUp()
    {
        factory = new PartsFactory();
        p1 = new Parts(2,3);
        p2 = new Parts(4,6);
        p3 = new Parts(8,12);
        p4 = new Parts(3,5);
        p5 = new Parts(6,10);
        p6 = new Parts(12,20);


    }

	void PartsFactoryTest::tearDown()
    {
        delete p1;
        delete p2;
        delete p3;
        delete p4;
        delete p5;
        delete p6;
        delete factory;


    }

    void PartsFactoryTest::testGetPart()
    {
        Parts* c1 = factory->getPart(PartsFactory::Type::SMALL_LASER);
        Parts* c2 = factory->getPart(PartsFactory::Type::MEDIUM_LASER);
        Parts* c3 = factory->getPart(PartsFactory::Type::LARGE_LASER);
        Parts* c4 = factory->getPart(PartsFactory::Type::SMALL_ROCKET);
        Parts* c5 = factory->getPart(PartsFactory::Type::MEDIUM_ROCKET);
        Parts* c6 = factory->getPart(PartsFactory::Type::LARGE_ROCKET);


        CPPUNIT_ASSERT_EQUAL(p1->getDamage(), c1->getDamage());
        CPPUNIT_ASSERT_EQUAL(p2->getDamage(), c2->getDamage());
        CPPUNIT_ASSERT_EQUAL(p3->getDamage(), c3->getDamage());
        CPPUNIT_ASSERT_EQUAL(p4->getDamage(), c4->getDamage());
        CPPUNIT_ASSERT_EQUAL(p5->getDamage(), c5->getDamage());
        CPPUNIT_ASSERT_EQUAL(p6->getDamage(), c6->getDamage());
        CPPUNIT_ASSERT_EQUAL(p1->getRechargeTime(), c1->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(p2->getRechargeTime(), c2->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(p3->getRechargeTime(), c3->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(p4->getRechargeTime(), c4->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(p5->getRechargeTime(), c5->getRechargeTime());
        CPPUNIT_ASSERT_EQUAL(p6->getRechargeTime(), c6->getRechargeTime());

    }


