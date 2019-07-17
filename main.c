#include<stdio.h>

// miki
int main(void)
{
    int a = 1;
    int b = 2;
    int sum = 0;

    sum = a + b;

    printf("sum = %d", sum);

    return;

}

int sum(int a, int b)
{
	return a + b;
}

int sum1(int a, int b)
{
	return a + a + b;
}

