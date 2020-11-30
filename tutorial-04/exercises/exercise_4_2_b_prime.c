/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

int is_prime(int number) {
    for (int divider = 2; divider < number; divider++) {
        if (number % divider == 0) {
            return 0;
        }
    }
    return 1;
}
