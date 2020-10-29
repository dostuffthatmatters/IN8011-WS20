/******************************************************************************
* Author: Moritz Makowski
* Lecture: TUM - IN8011 - WS20
* Session: Tutorial 03
******************************************************************************/

#include <stdio.h>

int main()
{

    int prime_numbers_found = 0;
    int upper_limit = 100;

    for (int n = 2; n < upper_limit; n++)
    {
        char is_prime = 1; // true (until an even divisor is found)

        for (int divisor = 2; divisor < n; divisor++)
        {
            if (n % divisor == 0)
            {
                is_prime = 0; // Even divisor found -> is_prime = false
            }
        }

        if (is_prime)
        {
            // Only execute of the dividend is a prime
            prime_numbers_found++;
            printf("\n%d", n);
        }
    }

    printf(
        "\n\nThere are %d prime numbers smaller than %d.\n\n",
        prime_numbers_found, upper_limit);

    return 0;
}
