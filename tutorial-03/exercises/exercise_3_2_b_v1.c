
#include <stdio.h>

int main() {

    // Alle Primzahlen zwischen von a und b

    int a = 2;
    int b = 42;

    if (a > b) {
        printf("a<b not satisfied!");
        return 1;
    }

    // z = zaehler
    // n = nenner

    for (int z=a; z<=b; z+=1) {
        int is_prime = 1;

        // n=n+1  <->  n+=1  <->  n++
        for (int n=2; n<z; n=n+1) {
            if (z%n == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d is a prime\n", z);
        }
    }

    return 0;
}