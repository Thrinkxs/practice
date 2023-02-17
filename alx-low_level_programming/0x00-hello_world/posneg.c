#include <stdio.h>

int main(void)
{
int num;
printf("Enter a number: \n");
scanf("%d", &num);
if (num >= 0)
{
printf("%d is a positive integer\n", num);
}
else if (num == 0)
{
printf("%d is 0\n", num);
}
else
{printf("%d is a negative integer\n", num);
}
}
