#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:  knife
//  action 1:  the knife cuts
knife.cut();
//  action 2:  the knife carves
knife.carve();
//  action 3:  the knife engraves owners initials
knife.engraveOwnersInitials();
//  2)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2:  the dog runs
dog.run();
//  action 3:  the dog humps the leg
dog.humpLeg(); 
//  3)
//  Noun:guitar
//  action 1:  fret the string on the guitar
guitar.fretString();
//  action 2:  pluck the string of the guitar
guitar.pluckString();
//  action 3:  mute the string of the guitar
guitar.muteString();
//  4)
//  Noun:camera
//  action 1:  the camera takes a picture
camera.takePicture();
//  action 2:  the camera takes a video
camera.takeVideo();
//  action 3:  the camera enables the flash
camera.enableFLash(); 
//  5)
//  Noun:monkey
//  action 1:  the monkey covers it's eyes
monkey.seeNoEvil();
//  action 2:  the monkey covers it's ears
monkey.hearNoEvil();
//  action 3:  the monkey covers it's mouth
monkey.speakNoEvil(); 
//  6)
//  Noun:car
//  action 1:  the car accelerates
car.accelerate();
//  action 2:  the car decelerates
car.decelerate();
//  action 3:  the car turns
car.turn(); 
//  7)
//  Noun:hammer
//  action 1:  the hammer pounds
hammer.pound();
//  action 2:  the hammer pulls
hammer.pull();
//  action 3:  the hammer will smash yout finger if you are not careful
hammer.smashYourFinger(); 
//  8)
//  Noun:screwdriver
//  action 1:  the screwdriver tightens
screwdriver.tighten();
//  action 2:  the screwdriver loosens
screwdriver.loosen();
//  action 3:  the screwdriver prys
screwdriver.pry(); 
//  9)
//  Noun:pencil
//  action 1:  the pencil writes 
pencil.write();
//  action 2:  the pencil draws
pencil.draw();
//  action 3:  the pencil traces outlines
pencil.traceOutline(); 
//  10)
//  Noun:tapeMachine
//  action 1:  the tape machine plays
tapeMachine.play();
//  action 2:  the tape machine records
tapeMachine.record();
//  action 3:  the tape machine can be set to always rewind to a position
tapeMachine.rewindToPosition(); 
//  10)
//  noun:saladShooter
//  action 1: the salad shooter slices cucumbers
saladShooter.sliceCucumber();
//  action 2: the salad shooter dices carrots
saladShooter.diceCarrots();
//  action 3: the salad shooter self cleans
saladShooter.selfClean();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
