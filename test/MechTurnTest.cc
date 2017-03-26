#include "MechTurnTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( MechTurnTest );

    void MechTurnTest::setUp()
    {
       s = new Aggressive();
       s1 = new Aggressive();
       p1 = new Parts(2,3);
       p2 = new Parts(3,5);
       p3 = new Parts(6,10);
       p4 = new Parts(12,20);


    }

	void MechTurnTest::tearDown()
    {
        delete s;
        delete s1;
        delete p1;
        delete p2;
        delete p3;
        delete p4;
    }

    void MechTurnTest::testEndTurn()
    {
        bool done;
        MechTurn turn;
        done = turn.endTurn();
        CPPUNIT_ASSERT_EQUAL(true, done);

    }

    void MechTurnTest::testInitalize()
    {

        MechTurn turn;
        turn.initalize();
        int dam = turn.getDamage();
        CPPUNIT_ASSERT_EQUAL(0, dam);
    }

    void MechTurnTest::testTakeTurn()
    {

       Mech fighter = Mech::MechBuilder(s).setSmallMech().build();
       fighter.addPart(p1);
       fighter.addPart(p2);
       fighter.addPart(p3);
       fighter.addPart(p4);
       Mech opponent = Mech::MechBuilder(s1).setSmallMech().build();
       opponent.addPart(p1);
       opponent.addPart(p2);
       opponent.addPart(p3);
       opponent.addPart(p4);
       MechTurn turn;
       turn.takeTurn(fighter, opponent);
       CPPUNIT_ASSERT_EQUAL(3, opponent.getArmor());

       turn.takeTurn(opponent,fighter);
       CPPUNIT_ASSERT_EQUAL(3, fighter.getArmor());

       turn.takeTurn(fighter,opponent);
       CPPUNIT_ASSERT_EQUAL(0,opponent.getArmor());

    }

    void MechTurnTest::testRunTurn()
    {
        bool done;
        Mech fighter = Mech::MechBuilder(s).setSmallMech().build();
       fighter.addPart(p1);
       fighter.addPart(p2);
       fighter.addPart(p3);
       fighter.addPart(p4);
       Mech opponent = Mech::MechBuilder(s1).setSmallMech().build();
       opponent.addPart(p1);
       opponent.addPart(p2);
       opponent.addPart(p3);
       opponent.addPart(p4);
       Turn* turn = new MechTurn();
       done = turn->runTurn(fighter, opponent);
       CPPUNIT_ASSERT_EQUAL(3, opponent.getArmor());
       CPPUNIT_ASSERT_EQUAL(true, done);

       done = turn->runTurn(opponent,fighter);
       CPPUNIT_ASSERT_EQUAL(3, fighter.getArmor());
       CPPUNIT_ASSERT_EQUAL(true, done);

       done = turn->runTurn(fighter,opponent);
       CPPUNIT_ASSERT_EQUAL(true, done);
       CPPUNIT_ASSERT_EQUAL(0,opponent.getArmor());
       delete turn;
    }

