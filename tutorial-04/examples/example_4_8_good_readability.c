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
        result += (number % 10); // number = 1243 -> result += 3;
        number /= 10;            // 1243 -> 124
    }

    return result;
}

int main() {
    int number = 12965;
    int checksum = calculate_checksum(number);

    printf("%d\n", checksum);
    return 0;
}