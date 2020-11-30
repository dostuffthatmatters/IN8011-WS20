/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

/**
 * This function calculates the checksum for a given number
 *
 * @param number - The number for which the checksum should be calculated
 * @return checksum of that number
 */
int calculate_checksum(int number) {
    // The single digits will be successively added to the result
    int result = 0;
    
    // Iterating over every decimal place
    while (number > 0) {
        int remainder = (number % 10); // number = 1243 -> remainder = 3;
        result += remainder;

        number -= remainder; // 1243 -> 1240
        number /= 10;        // 1240 -> 124
    }
    return result;
}

int main() {
    int number = 12965;
    int checksum = calculate_checksum(number);

    printf("%d\n", checksum);
    return 0;
}