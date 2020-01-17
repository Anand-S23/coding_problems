/*
Objective:
This challenge will help you to learn how to take a character, a string and a sentence as input in C.

Task:
You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format:
First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input.

Output Format:
Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .

Sample Input 0:
C
Language
Welcome To C!!

Sample Output 0:
C
Language
Welcome To C!!
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char letter;
    char word[100];
    char s[500];

    scanf("%c", &letter);
    printf("%c\n", letter);

    scanf("%s", word);
    printf("%s\n", word);

    scanf("\n");
    scanf("%[^\n]s", s);
    printf("%s", s);

    return 0;
}
