#include "main.h"

/////
// For installation, upgrading, documentations and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
const int DRIVE_SPEED = 110;  
const int TURN_SPEED = 90;
const int SWING_SPEED = 90;

///
// Constants
///
void default_constants() {
  chassis.pid_heading_constants_set(3, 0, 20);
  chassis.pid_drive_constants_set(9, 0, 5);
  chassis.pid_turn_constants_set(3, 0, 20);
  chassis.pid_swing_constants_set(5, 0, 30);

  chassis.pid_turn_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_swing_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_drive_exit_condition_set(300_ms, 1_in, 500_ms, 3_in, 750_ms, 750_ms);

  chassis.slew_drive_constants_set(7_in, 80);
}

void better_example(){
  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();
}
// . . .
// Make your own autonomous functions here!
// . . .

void offense_auton(){
  chassis.pid_drive_set(48, DRIVE_SPEED, true);
  chassis.pid_wait();

}
void drive_and_swing(){
  chassis.pid_swing_set(ez::LEFT_SWING, -55_deg, 60, 8);
  chassis.pid_drive_set(-18, DRIVE_SPEED, true);
}
void far_wp() {
  wing2.set_value(true);
  pros::delay(750);
  wing2.set_value(false);
  intake.move(127);
  chassis.pid_drive_set(50, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(-50, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(40_deg, TURN_SPEED);
  chassis.pid_wait();
  intake.move(-127);
  chassis.pid_drive_set(50, DRIVE_SPEED, true);
  chassis.pid_wait();

}

void close_wp(){
  intake.move(127);
  wing1.set_value(true);
  chassis.pid_drive_set(50, DRIVE_SPEED, true);
  chassis.pid_wait();
  // intake.move(127);
  // chassis.pid_wait();
  wing1.set_value(false);
  chassis.pid_drive_set(-29, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_swing_set(ez::RIGHT_SWING, 140_deg, -SWING_SPEED, 10);
  chassis.pid_wait();
  chassis.pid_drive_set(-27, 127, true);
  chassis.pid_wait();
  chassis.pid_drive_set(25, DRIVE_SPEED, true);
  chassis.pid_wait();
  wing2.set_value(true);
  chassis.pid_swing_set(ez::RIGHT_SWING, 85_deg, 60, 8);
  chassis.pid_wait();
  wing2.set_value(false);
  chassis.pid_drive_set(25, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(70_deg, TURN_SPEED);
  chassis.pid_wait();
  intake.move(-127);
  //wing1.set_value(true);
  chassis.pid_drive_set(10, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(-30, 110, true);
  chassis.pid_wait();
  // chassis.pid_turn_set(95_deg, TURN_SPEED);
  // chassis.pid_wait();
}

void close_wp_safe(){
  chassis.pid_drive_set(-10, DRIVE_SPEED, true);
  chassis.pid_wait();
  wing2.set_value(true);
  chassis.pid_swing_set(ez::RIGHT_SWING, -30_deg, 60, 8);
  chassis.pid_wait();
  wing2.set_value(false);
  chassis.pid_drive_set(18, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_swing_set(ez::RIGHT_SWING, -45_deg, 60, 8);
  chassis.pid_wait();
  intake.move(-127);
  wing1.set_value(true);
  chassis.pid_drive_set(25, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(-5_deg, -TURN_SPEED);
  chassis.pid_wait();
}


void skills_auton(){
 
  // chassis.pid_drive_set(24, DRIVE_SPEED, true);

  // chassis.pid_swing_set(ez::LEFT_SWING, 15_deg, TURN_SPEED);
  // chassis.pid_wait();
  // chassis.pid_drive_set(-5, DRIVE_SPEED, true);

  // chassis.pid_wait();
  chassis.pid_drive_set(-24, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_swing_set(ez::LEFT_SWING, 30_deg, TURN_SPEED);
  chassis.pid_wait();
  chassis.pid_drive_set(-8, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(20, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_swing_set(ez::LEFT_SWING, -30_deg, TURN_SPEED);
  chassis.pid_wait();
  chassis.pid_drive_set(-3, DRIVE_SPEED, true);
  chassis.pid_wait();
  wing2.set_value(true);
  chassis.pid_wait();
  catapult.move(127);
  catapult2.move(127);
  pros::delay(5000);
  catapult.move(0);
  catapult2.move(0);
  chassis.pid_wait();
  chassis.pid_drive_set(15, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_swing_set(ez::RIGHT_SWING, -30_deg, TURN_SPEED);
  chassis.pid_wait();

  // chassis.pid_swing_set(ez::LEFT_SWING, -30_deg, TURN_SPEED);
  // chassis.pid_wait();
  // chassis.pid_drive_set(-2, DRIVE_SPEED, true);
  // chassis.pid_wait();
  // chassis.pid_swing_set(ez::LEFT_SWING, 10_deg, TURN_SPEED);
  // chassis.pid_wait();
  // wing2.set_value(true);
  // chassis.pid_wait();
  // intake.move(-127);
  // chassis.pid_wait();

  // chassis.pid_wait();
  // wing2.set_value(true);
  // chassis.pid_wait();
  // intake.move(-127);
  // chassis.pid_wait();
  // wing2.set_value(false);
  // chassis.pid_wait();
  // chassis.pid_drive_set(84, DRIVE_SPEED, true);
  // chassis.pid_wait();
  // wing2.set_value(true);
  // chassis.pid_swing_set(ez::RIGHT_SWING, 40_deg, 60, 8);
  // chassis.pid_wait();
  // chassis.pid_drive_set(32, DRIVE_SPEED, true);
  // chassis.pid_wait();
  // chassis.pid_turn_set(145_deg, TURN_SPEED);
  // chassis.pid_wait();
  // wing1.set_value(true);
  // chassis.pid_wait();
  // chassis.pid_drive_set(-10, DRIVE_SPEED, true);
  // chassis.pid_wait();
  // chassis.pid_drive_set(2, DRIVE_SPEED, true);
  // chassis.pid_turn_set(45_deg, TURN_SPEED);


  



  
  
}

void offense_Triball()
{
  chassis.pid_drive_set(3, DRIVE_SPEED, true);
  //drive forwards 
  intake.move(127);
  //intake tribal
  chassis.pid_wait();
  chassis.pid_drive_set(-32, DRIVE_SPEED, true);
  chassis.pid_wait();
  drive_and_swing();
  chassis.pid_wait();
  wing1.set_value(true);
  chassis.pid_wait();
  chassis.pid_drive_set(-5, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(-100_deg, TURN_SPEED);
  chassis.pid_wait();
  wing1.set_value(!true);
  //chassis.pid_drive_set(-12, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_swing_set(ez::LEFT_SWING, -80_deg, 60);
  chassis.pid_wait();
  chassis.pid_drive_set(-18, DRIVE_SPEED, true);
  chassis.pid_wait();
  
  //testing triball4
  // intake.move(127);
  // chassis.pid_drive_set(49, DRIVE_SPEED, true);
  // chassis.pid_wait();
  // chassis.pid_turn_set(160_deg, TURN_SPEED);  
  // chassis.pid_wait();
  // chassis.pid_swing_set(ez::LEFT_SWING, -12_deg, 110, true);
  // chassis.pid_drive_set(-10, DRIVE_SPEED, true);
  //chassis.pid_wait();
  // chassis.pid_wait();
  //chassis.pid_drive_set(-18, DRIVE_SPEED, true);
  //chassis.pid_wait();

  // chassis.pid_turn_set(-10_deg, TURN_SPEED);
  // chassis.pid_wait();
  //chassis.pid_drive_set(-14, DRIVE_SPEED, true);
  // wing1.set_value(!true);
  // chassis.pid_wait();

  // chassis.pid_swing_set(ez::LEFT_SWING, -15_deg, TURN_SPEED);
  // chassis.pid_wait();
  //chassis.pid_drive_set(-9, DRIVE_SPEED, true);
  // chassis.pid_turn_set(-15_deg, TURN_SPEED);
  // chassis.pid_wait();
  // chassis.pid_drive_set(-8, DRIVE_SPEED, true);
  // chassis.pid_wait();
  // chassis.pid_drive_set(-23, DRIVE_SPEED, true);
  // chassis.pid_wait();
  
  //drive backward 
  // pros::delay(500);
  // //waits for half a second
  // chassis.pid_swing_set(ez::LEFT_SWING, 45_deg, -SWING_SPEED, 10);
  // //move only left side going backward
  // wing1.set_value(true);
  // //open wing to push triball out of corner
  // chassis.pid_drive_set(-75, DRIVE_SPEED, true);
  // //drive back push both triballs
  // chassis.pid_turn_set(180_deg, TURN_SPEED);
  // //turns forward
  // chassis.pid_wait();
  // //wait for a couple milliseconds
  // intake.move(127);
  // //push triball in the goal
  // chassis.pid_drive_set(-50, DRIVE_SPEED, true);
  // chassis.pid_turn_set(-65_deg, TURN_SPEED);
  // intake.move(127);
  // chassis.pid_turn_set(40_deg, TURN_SPEED);
  // chassis.pid_turn_set(-50_deg, TURN_SPEED);
  // chassis.pid_drive_set(20, DRIVE_SPEED, true);
  // chassis.pid_drive_set(-50, DRIVE_SPEED, true);
  // chassis.pid_turn_set(180_deg, TURN_SPEED);
  // intake.move(-127);
}

//Left swing + : swings left side forward
//Left swing - : swings left side backward
//Right swing - : swings right side forward
//Right swing + : swings right side backward
///
// Drive Example
///
void drive_example() {
  //far_wp();
  //close_wp();
  //close_wp_safe();
  //skills_auton();
  offense_Triball();
  //offense_auton();

  //close_wp_safe();
  // The first parameter is target inches
  // The second parameter is max speed the robot will drive at
  // The third parameter is a boolean (true or false) for enabling/disabling a slew at the start of drive motions
  // for slew, only enable it when the drive distance is greater then the slew distance + a few inches

//  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
 // chassis.pid_wait();

 // chassis.pid_drive_set(-12_in, DRIVE_SPEED);
  //chassis.pid_wait();

  //chassis.pid_drive_set(-12_in, DRIVE_SPEED);
  //chassis.pid_wait();
  //chassis.pid_swing_set(ez::LEFT_SWING, 45_deg, SWING_SPEED, 45);
 // chassis.pid_wait();

//  chassis.pid_turn_set(45_deg, TURN_SPEED);
  //chassis.pid_wait();

  //chassis.pid_turn_set(0_deg, TURN_SPEED);
  //chassis.pid_wait();
}

///
// Turn Example
///
void turn_example() {
  // The first parameter is target degrees
  // The second parameter is max speed the robot will drive at

  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();

//  chassis.pid_turn_set(45_deg, TURN_SPEED);
  //chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();
}

///
// Combining Turn + Drive
///
void drive_and_turn() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
}

///
// Wait Until and Changing Max Speed
///
void wait_until_change_speed() {
  // pid_wait_until will wait until the robot gets to a desired position

  // When the robot gets to 6 inches, the robot will travel the remaining distance at a max speed of 30
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait_until(6_in);
  chassis.pid_speed_max_set(30);  // After driving 6 inches at DRIVE_SPEED, the robot will go the remaining distance at 30 speed
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  // When the robot gets to -6 inches, the robot will travel the remaining distance at a max speed of 30
  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait_until(-6_in);
  chassis.pid_speed_max_set(30);  // After driving 6 inches at DRIVE_SPEED, the robot will go the remaining distance at 30 speed
  chassis.pid_wait();
}

///
// Swing Example
///
void swing_example() {
  // The first parameter is ez::LEFT_SWING or ez::RIGHT_SWING
  // The second parameter is target degrees
  // The third parameter is speed of the moving side of the drive
  // The fourth parameter is the speed of the still side of the drive, this allows for wider arcs

  chassis.pid_swing_set(ez::LEFT_SWING, 45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, 0_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, 45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::LEFT_SWING, 0_deg, SWING_SPEED, 45);
  chassis.pid_wait();
}

///
// Auto that tests everything
///
void combining_movements() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, -45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
}

///
// Interference example
///
void tug(int attempts) {
  for (int i = 0; i < attempts - 1; i++) {
    // Attempt to drive backwards
    printf("i - %i", i);
    chassis.pid_drive_set(-12_in, 127);
    chassis.pid_wait();

    // If failsafed...
    if (chassis.interfered) {
      chassis.drive_sensor_reset();
      chassis.pid_drive_set(-2_in, 20);
      pros::delay(1000);
    }
    // If robot successfully drove back, return
    else {
      return;
    }
  }
}

// If there is no interference, robot will drive forward and turn 90 degrees.
// If interfered, robot will drive forward and then attempt to drive backwards.
void interfered_example() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  if (chassis.interfered) {
    tug(3);
    return;
  }

  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();
}
