#include "MechTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( MechTest );

    void MechTest::setUp()
    {
       s = new Aggressive();
       p1 = new Parts(2,3);
       p2 = new Parts(3,5);
       p3 = new Parts(6,10);
       p4 = new Parts(12,20);
       p5 = new Parts(2,3);

    }

	void MechTest::tearDown()
    {
        delete s;
        delete p1;
        delete p2;
        delete p3;
        delete p4;
        delete p5;

    }

    void MechTest::testConstructor()
    {
        vector<Parts*> vec;
        vec.push_back(p1);
        vec.push_back(p2);
        vec.push_back(p3);
        vec.push_back(p4);
       string strat = "Aggressive";
       Mech b = Mech::MechBuilder(s).setSmallMech().build();
       CPPUNIT_ASSERT_EQUAL(2, b.getArms());
       CPPUNIT_ASSERT_EQUAL(2, b.getLegs());
       CPPUNIT_ASSERT_EQUAL(strat, b.getStrategy());
       CPPUNIT_ASSERT_EQUAL(15, b.getArmor());
       b.addPart(p1);
       b.addPart(p2);
       b.addPart(p3);
       b.addPart(p4);
       CPPUNIT_ASSERT(vec == b.getWeapons());
       CPPUNIT_ASSERT_THROW(b.addPart(p5),runtime_error);

    }

    void MechTest::testAddWeapons()
    {
       vector<Parts*> vec;
       vec.push_back(p1);
       vec.push_back(p2);
       vec.push_back(p3);
       vec.push_back(p4);
       string strat = "Aggressive";
       Mech b = Mech::MechBuilder(s).setSmallMech().build();
       b.addPart(p1);
       b.addPart(p2);
       b.addPart(p3);
       b.addPart(p4);

       CPPUNIT_ASSERT(vec == b.getWeapons());
    }

    void MechTest::testAttack()
    {
       string strat = "Aggressive";
       Mech b = Mech::MechBuilder(s).setSmallMech().build();
       b.addPart(p1);
       b.addPart(p2);
       b.addPart(p3);
       b.addPart(p4);
       CPPUNIT_ASSERT_EQUAL(12, b.attack());
       CPPUNIT_ASSERT_EQUAL(6, b.attack());
       CPPUNIT_ASSERT_EQUAL(3, b.attack());
       CPPUNIT_ASSERT_EQUAL(2, b.attack());
    }
