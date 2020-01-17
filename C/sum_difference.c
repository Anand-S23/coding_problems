/*
Objective:
The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.

Task:
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
    Declare  variables: two of type int and two of type float.
    Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
    Use the  and  operator to perform the following operations:
    Print the sum and difference of two int variable on a new line.
    Print the sum and difference of two float variable rounded to one decimal place on a new line.
    
Input Format:
The first line contains two integers.
The second line contains two floating point numbers.
 
Output Format:
Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.

Sample Input:
10 4
4.0 2.0

Sample Output:
14 6
6.0 2.0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float num3, num4;

    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);

    printf("%d %d\n", (num1+num2), (num1-num2));
    printf("%0.1f %0.1f", (num3+num4), (num3-num4));
    
    return 0;
}
