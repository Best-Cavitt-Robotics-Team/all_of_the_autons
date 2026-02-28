#include "helper_functions.h"
#include "main.h"
#include "globals.h"

void autonomous() {
    switch (selected_auton){
        case 0: //lweft>.<
        
        translate(20,0,750); //pev 24
        pros::delay(100);
        setHeading(0,70,500);
        pros::delay(100);
        intake_bottom.move_velocity(-600);
        pros::delay(100);
        translate(15,70,750); 
        translate(5,70,250);
        pros::delay(100); 
        setHeading(0,260,750);
        pros::delay(100);
        translate(-13.5,260,750);
        ballblock.set_value(true);
        pros::delay(100);
        intake_bottom.move_velocity(-400);
        intake_top.move_velocity(-400);
        pros::delay(1750);
        intake_top.move_velocity (0);
        intake_bottom.move_velocity(0);
        translate(46,260,1500);
        pros::delay(100);
        ballblock.set_value(false);
        setHeading(0,212,250);//pev
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(-5,212,500);
        pros::delay(100);
        intake_bottom.move_velocity(-600);
        translate(24,212,1000); //prev 24, cuz of trans-5
        pros::delay(350); //prev 550
        translate(-34,212,1000);
        intake_top.move_velocity(-600);
        pros::delay(1500);
        scraper1.set_value(false);
        scraper2.set_value(false);
        translate(8.5,212,500);
        pros::delay(100);
        setHeading(0,280,250);
        pros::delay(100);
        translate(-12.5,280,500);
        pros::delay(100);
        setHeading(0,213,250); //pev
        translate(-27,213,500);
        pros::delay(50);
        setHeading(0,240,250);
        pros::delay(50);
        translate(-13,240,500);
        

            break;
        case 1: //swowo ayeuupee
        translate(31.5,0,750); //pev 33
        pros::delay(150);
        setHeading(0,90,250);
        intake_bottom.move_velocity(-600);
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(20.5,90,1000); //time pev 975
        translate(-32,90,850); //pev -30/750
        intake_bottom.move_velocity(-600);
        intake_top.move_velocity(-600);
        pros::delay(850); //pev 900
        intake_top.move_velocity(0);
        setHeading(0,90,100); //pev no
        scraper1.set_value(false);
        scraper2.set_value(false);
        translate(17,90,750);
        pros::delay(100);
        setHeading(0,220,250);
        pros::delay(100);
        translate(35,220,750);
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(8,220,300); //pev 500
        translate(-3.25,220,250); //pev -4/5--
        scraper1.set_value(false);
        scraper2.set_value(false);
        pros::delay(100);
        setHeading(0,181.5,500); //pev 182
        pros::delay(100);
        translate(49,181.5,1000);//pev 49/182
        pros::delay(100);
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(4, 181.5, 250);//pev 182
        translate(-4, 181.5, 250);//pev 182
        pros::delay(100);
        setHeading(0,135,200); //pev 250
        pros::delay(100);
        translate(-20.25,135,750); //pev -20
        ballblock.set_value(true);
        intake_bottom.move_velocity(-300);
        intake_top.move_velocity(-300);
        pros::delay(600); //pev 800 but nev was ambitions
        intake_top.move_velocity(0);
        intake_bottom.move_velocity(0); //pev no
        translate(-1,135,200);
        ballblock.set_value(false);
        translate(47,135,900); //pev 39
        setHeading(1,90,200);
        intake_bottom.move_velocity(-600);
        translate(22,90,900); //pev 23
        translate(-30,90,500);
        intake_bottom.move_velocity(-600);
        intake_top.move_velocity(-600);



        
        

        //     break;

        case 2: //rite._.
        
        translate(30,0,750);
        pros::delay(150);
        setHeading(0,90,250);
        intake_bottom.move_velocity(-600);
        scraper1.set_value(true);
        scraper2.set_value(true);
        pros::delay(200);
        translate(20,90,1000);
        translate(-32,90,850);
        intake_top.move_velocity(-600);
        pros::delay(1500);
        intake_bottom.move_velocity(0);
        intake_top.move_velocity(0);
        scraper1.set_value(false);
        scraper2.set_value(false);
        translate(8.5,90,750);
        pros::delay(200);
        setHeading(0,0,250);
        pros::delay(200);
        translate(10,0,750);
        pros::delay(200);
        setHeading(0,80,250);
        pros::delay(200); 
        translate(-28.5,80,2000);




            break;
        case 3:

        translate(25,0,750); //prev 24
        pros::delay(400);
        setHeading(0,70,500);
        pros::delay(250);
        intake_bottom.move_velocity(-600);
        pros::delay(100);
        translate(20,70,750); 
        pros::delay(500); 
        setHeading(0,260,750); //prev 253
        pros::delay(400);
        ballblock.set_value(true);
        translate(-17,260,1000); //prev 253
        pros::delay(400);
        intake_top.move_velocity(-400);
        intake_bottom.move_velocity(-400);
        pros::delay(1750);
        intake_top.move_velocity (0);
        intake_bottom.move_velocity(0);
        translate(66,260,1700);
        pros::delay(400);
        ballblock.set_value(false);
        setHeading(0,212,1000);
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(-5,212,500);
        pros::delay(100);//maybe not
        intake_bottom.move_velocity(-600);
        translate(20,212,750);
        pros::delay(1000);
        translate(-38,212,750);
        intake_top.move_velocity(-600);
        break; 

        case 4:
        translate(25,0,500); //prev 24
        pros::delay(250);

        setHeading(0,-69,250);
        pros::delay(250);//turn to face the 3 blocks

        intake_bottom.move_velocity(600);
        pros::delay(100);//start moving intake

        translate(34,-69,750); 
        translate(-8,-69,750);
        pros::delay(200);
        setHeading(0,-122,250);

        pros::delay(500);
        intake_bottom.move_velocity(-600);
        translate(60,-122,900);
        translate(-2,-122,900);


        setHeading(0,-165,250);
        pros::delay(500);
        translate(-25,-165,750);


        ballblock.set_value(true);
        intake_top.move_velocity(-400);
        intake_bottom.move_velocity(-400);
        pros::delay(1000);

        intake_top.move_velocity (0);
        intake_bottom.move_velocity(0);
        translate(66,-165,1700);
        pros::delay(400);
        ballblock.set_value(false);
        setHeading(0,-200,250); //tune anggle and for rest
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(-5,-200,500);
        pros::delay(100);//maybe not
        intake_bottom.move_velocity(-600);
        translate(20,-200,750);
        pros::delay(1000);
        translate(-38,-200,750);
        intake_top.move_velocity(-600);
        break;
}
}


