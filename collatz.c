/* 
collatz(n)
According to Wikipedia:
The Collatz conjecture is one of the most famous unsolved problems in mathematics.
The conjecture asks whether repeating two simple arithmetic operations will eventually transform every positive integer into one. 
It concerns sequences of integers in which each term is obtained from the previous term as follows: 
If the previous term is even, the next term is one half of the previous term. 
If the previous term is odd, the next term is 3 times the previous term plus 1. 
The conjecture is that these sequences always reach 1, no matter which positive integer is chosen to start the sequence.

If the conjecture is false, it can only be because there is some starting number which gives rise to a sequence that does not contain 1. 
Such a sequence would either enter a repeating cycle that excludes 1, 
or increase without bound. No such sequence has been found

The below program counts how many steps it takes for a positive number to get to number 1 recursively, starting with that positive number.
*/

#include <stdio.h>

int collatz(n)
{
    if (n == 1)
    {
        return 1;
    }
    //if number is even 
    else if (n % 2 == 0) 
    {
        return 1 + collatz(n/2);
    }
    //if number is odd
    else
    {
        return 1 + collatz(3*n + 1); 
    }
}


int main()
{
    int x;
    int y = 1;
    
    printf("Enter a positive integer: \n");
    
    scanf("%d", &x);

    /*
    collatz(x) returns the number of recursions including number 1
    steps TO nbr 1 are collatx(x) value minus 1 
    */
    int steps = collatz(x) - 1;
    
    printf("It takes %d steps for number %d to get to %d\n", steps, x, y);

    return 0;
    
}