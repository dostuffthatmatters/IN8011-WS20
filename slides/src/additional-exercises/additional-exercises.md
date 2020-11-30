---
marp: true
paginate: true
---

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

# IN8011 - Additional Exercises

Moritz Makowski - moritz.makowski@tum.de

---

This is just a collection of some exercises.

<br/>

Please try to solve them before looking at the solutions. There are many possible solutions to a given problem. The given solutions are just the ones I came up with.

---

## **Exercise 1: Average Lifetime of Bacteria &#9733; &#9734; &#9734; &#9734; &#9734;** 

Write a simulation to determine the average lifetime of individual bacteria organisms. Each individual organism dies with a probability $p$ after one timestep.

<br/>

You may use the following lines to generate a random number.
```c
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int my_random = rand() % 42;  // A random integer between 0 and 42
}
```

---

## **Exercise 2: Rock-Paper-Scissors &#9733; &#9733; &#9734; &#9734; &#9734;** 

Write a program that plays Rock-Paper-Scissors against a human player.

<br/>

You may use the following lines to generate a random number.
```c
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int my_random = rand() % 42;  // A random integer between 0 and 42
}
```

---

## **Exercise 3: Parentheses Logic** **&#9733; &#9733; &#9734; &#9734; &#9734; (&#9733; &#9733; &#9733; &#9733; &#9734;)**

Write a program that tests whether a given string including parentheses ( `(` and `)` ) is fulfilling the rules for setting parentheses:

1. For every opening parentheses there exists a closing parentheses and vice versa

2. Every closing paretheses appears after the respective opening parentheses.

3. Other characters do not play a role in this logic

**Super Bonus:** Expand your program to support different types of braces -> `(`/`)`, `{`/`}`, `[`/`]`. It is important that they don't interfere with each other, e.g. `([...)]` is invalid!

---

## **Exercise 4: Calculate the Checksum (Quersumme) &#9733; &#9734; &#9734; &#9734; &#9734;**

Write a program that calculates the checksum of a decimal number.

The checksum of a number is the sum of all digits of the number.
E.g. The checksum of `2345` is `14` because `2+3+4+5 = 14` .
 
---

## **Exercise 5: Calculate Harshad-Numbers &#9733; &#9733; &#9734; &#9734; &#9734;**

An integer number is called harshad number if it is evenly divisible by its checksum.

Write a program that calculates the first 100 harshad-numbers.
 
---

## **Exercise 6: Calculate Perfect Numbers &#9733; &#9733; &#9734; &#9734; &#9734;**

An integer number is called perfect number if it is equal to the sum of its even divisors:

The first two perfect numbers are:
* 6 = 3 + 2 + 1
* 28 = 14 + 7 + 4 + 2 + 1

Write a program that calculates the first 4 perfect numbers.

---

## **Exercise 7: Equation-Strings &#9733; &#9733; &#9733; &#9734; &#9734; (&#9733; &#9733; &#9733; &#9733; &#9734;)**

Write a program in which you defined a String inside the code which contains a mathematical expression and solve that expression. The string can only contain digits, `+` and `-` signs. No spaces or other characters.

<br/>

Example:

```c
char math_string[100] = "1+40-55-30+16";

int result = solve_equation(math_string, 100);  // result = -28
```

---

**Bonus Idea:** Whenever an equal sign `=` is found inside a string the thing is treated as an equation.

<br/>

Example:

```c
char equation_1[100] = "3-4+15=14";
char equation_2[100] = "3-4+15=17";
char equation_3[100] = "3-4+15=14=16-2";

int result = solve_equation(equation_1, 100);  // returns 1 (true)
int result = solve_equation(equation_2, 100);  // returns 0 (false)
int result = solve_equation(equation_3, 100);  // returns 1 (true)
```

---

## **Exercise 8: Equation Possibilities &#9733; &#9733; &#9733; &#9733; &#9734;**

Write a program that outputs all possibilities to put `+` or `-` or *nothing* between the numbers 1, 2, ..., 9 (in this order) such that the result is 100.

For example 1 + 2 + 3 - 4 + 5 + 6 + 78 + 9 = 100.

---

## **Sources** (including more challenges)

* https://adriann.github.io/programming_problems.html
* https://projecteuler.net/
