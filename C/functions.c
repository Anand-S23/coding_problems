/*
Objective:
In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

Task:
You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.

a += b is equivalent to a = a + b;

Input Format:
Input will contain four integers -  , one in each line.

Output Format:
Print the greatest of the four integers.
Note: I/O will be automatically handled.

Sample Input:
3
4
6
5

Sample Output:
6
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = a;

    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    
    return max;

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

