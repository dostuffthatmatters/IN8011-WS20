
#include <stdio.h>

int main() {

    // Groesster Gemeinsamer Teiler von a und b

    int a = 42;
    int b = 12;

    int result = 1;

    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }

    for (int teiler=b; teiler>0; teiler=teiler-1) {
        if ((a % teiler == 0) && (b % teiler == 0)) {
            result = teiler;
            break;
        }
    }
    printf("Der ggt von a=%d und b=%d ist %d", a, b, result);

    return 0;
}