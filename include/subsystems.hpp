#pragma once

#include "api.h"

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::MotorGroup intake({-1, -2}); 
inline pros::adi::DigitalOut clamp_intake(1);
//bool clamp_intake_enabled = false; 

// inline pros::adi::AnalogOut ClampPiston('A');


// inline pros::adi::DigitalIn limit_switch('A');