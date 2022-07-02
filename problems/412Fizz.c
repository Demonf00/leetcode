#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char words[10][n];
    for (int i = 1; i <= n; ++i)
    {
        int three = i % 3;
        int five = i % 5;
        if (!three && !five)
            words[i] = "FizzBuzz";
        else if (!three)
            words[i] = "Fizz";
        else if (!five)
            words[i] = "Buzz";
        else
            words[i] = i;
    }
}