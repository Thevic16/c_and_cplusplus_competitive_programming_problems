// Following is a simple C program
// to demonstrate syntax of switch.
#include <stdio.h>
int main()
{
    int x = 2;
    switch (x)
    {
        case 1: printf("Choice is 1");
            break;
        case 2: printf("Choice is 2");
            break;
        case 3: printf("Choice is 3");
            break;
        default: printf("Choice other than 1, 2 and 3");
            break;
    }
    return 0;
}



/*
#include <stdio.h>

int main () {

    int a;

    for( a = 10; a < 20; a = a + 1 ){
        printf("value of a: %d\n", a);
    }

    return 0;
}

*/





/*
// C program to illustrate do-while loop
#include <stdio.h>

int main()
{
    int i = 2; // Initialization expression

    do
    {
        // loop body
        printf( "Hello World\n");

        // update expression
        i++;

    }  while (i < 1);   // test expression

    return 0;
}
*/










/*
// C program to illustrate while loop
#include <stdio.h>

int main()
{
    // initialization expression
    int i = 1;

    // test expression
    while (i < 6)
    {
        printf( "Hello World\n");

        // update expression
        i++;
    }

    return 0;
}


*/


/*
#include <stdio.h>
int main()
{
    int a = 10, b = 4, c = 10, d = 20;
    // logical operators

    // logical AND example
    if (a > b && c == d)
        printf("a is greater than b AND c is equal to d\n");
    else
        printf("AND condition not satisfied\n");

    // logical AND example
    if (a > b || c == d)
        printf("a is greater than b OR c is equal to d\n");
    else
        printf("Neither a is greater than b nor c is equal "" to d\n");

    // logical NOT example
    if (!a)
        printf("a is zero\n");
    else
        printf("a is not zero");

    return 0;
}

*/


/*
#include <stdio.h>

// An example function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

// main function that doesn't receive any parameter and
// returns integer.
int main(void)
{
    int a = 10, b = 20;

    // Calling above function to find max of 'a' and 'b'
    int m = max(a, b); // delivery of parameters and waiting for parameter

    printf("m is %d", m);
    return 0;
}

*/


/*
#include <stdio.h>
int main()
{
    // declaration and definition of variable 'a123'
    char a123 = 'a';

    // This is also both declaration and definition as 'b' is allocated
    // memory and assigned some garbage value.
    float b;

    // multiple declarations and definitions
    int _c, _d45, e;

    // Let us print a variable
    printf("%c \n", a123);

    return 0;
}
*/