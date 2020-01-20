/*
Task:
In this challenge, you have to input a five digit number and print the sum of digits of the number.

Sample Input 0:
10564

Sample Output 0:
16
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, i, sum = 0;
    scanf("%d", &n);
    int sum_arr[5] = {0, 0, 0, 0, 0};
    
    for (i = 0; i < 5; ++i)
    {
        sum_arr[i] = n % 10;
        n = (int) n / 10;
    }

    for (i = 0; i < 5; ++i)
    {
        sum += sum_arr[i];
    }

    printf("%d", sum);

    return 0;
}
