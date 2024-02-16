#pragma once

#include "EZ-Template/drive/drive.hpp"

extern Drive chassis;

extern pros::Motor intake;
extern pros::ADIDigitalOut wing1;
extern pros::ADIDigitalOut wing2;
extern pros::Motor catapult;
extern pros::Motor catapult2;

void drive_example();
void turn_example();
void drive_and_turn();
void wait_until_change_speed();
void swing_example();
void combining_movements();
void interfered_example();

void default_constants();
void offense_auton();
void close_wp();
void close_wp_safe();
void skills_auton();
void better_example();
void offense_Triball();
void drive_and_swing();
