/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 08
************************************************************************************/


#include <stdio.h>

int factorial_loop(int n);

int main() {
    int n, f;
    printf("Enter the number whose factorial you want to calculate?");
    scanf("%d", &n);

    f = factorial_loop(n);
    printf("factorial = %d", f);
}

/**
 * Calculates the factorial of n (=n!) -> factorial(6)=6*5*4*3*2*1
 * @param n - Any number larger than 0 (included)
 * @return (n)*(n-1)*(n-2)*...*(1)
 */
int factorial_loop(int n) {
    int f;
    if (0 <= n && n <= 1) {
        f = 1;
    } else {
        f = 1;
        for (int i=2; i<=n; i++) {
            f *= i;
        }
    }
    return f;
}