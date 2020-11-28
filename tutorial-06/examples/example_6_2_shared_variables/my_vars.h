/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 06
************************************************************************************/


#ifndef FILENAME_H
#define FILENAME_H

#define PI_APPROX 3.141592
// PI_APPROX is now accessible as a float in-
// side every file that includes this header

extern int global_var;

void increment_local_var(int amount);
void increment_global_var(int amount);

int get_local_var();

#endif
