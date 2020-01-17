/*
Objective:
In this challenge, you will learn to implement the basic functionalities of pointers in C. A pointer in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership.
     
Task:
You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.

Input Format:
The input will contain two integers,  and , separated by a newline.

Output Format:
You have to print the updated value of  and , on two different lines.

Sample Input:
4
5

Sample Output\:
9
1
*/

#include <stdio.h>

absolute(int num)
{
    if (num < 0)
        return -num;
    return num;
}

void update(int *a,int *b) {
    int old_a = *a;
    *a += *b;
    *b = absolute((old_a - *b));   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
