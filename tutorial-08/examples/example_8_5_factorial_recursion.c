/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 08
************************************************************************************/


#include <stdio.h>

int factorial_recursion(int n);

int main() {
    int n, f;
    printf("Enter the number whose factorial you want to calculate?");
    scanf("%d", &n);

    f = factorial_recursion(n);
    printf("factorial = %d", f);
}

/**
 * Calculates the factorial of n (=n!) -> factorial(6)=6*5*4*3*2*1
 * @param n - Any number larger than 0 (included)
 * @return (n)*(n-1)*(n-2)*...*(1)
 */
int factorial_recursion(int n) {
    if (0 <= n && n <= 1) {
        return 1;
    } else {
        return n * factorial_recursion(n - 1);
    }
}
