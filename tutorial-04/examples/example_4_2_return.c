/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

int power(int n, int m)
{
    int result = n;
    for (int i = 1; i < m; i++)
    {
        result = result * n;
    }
    return result;
}

int main()
{

    int n = 3;
    int m = 4;
    int my_number = power(n, m);

    printf("%d^%d = %d", n, m, my_number);

    return 0;
}