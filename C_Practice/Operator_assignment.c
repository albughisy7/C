#include <stdio.h>

int main()
{
    int a;

    system("cls");
    printf("Operator Assignment\n\n");

    a = 7;
    printf("a += 2  : %d\n", a += 2);
    a = 7;
    printf("a -= 2  : %d\n", a -= 2);
    a = 7;
    printf("a *= 2  : %d\n", a *= 2);
    a = 7;
    printf("a %= 2  : %d\n", a %= 2);
    a = 7;
    printf("a <<= 2 : %d\n", a <<= 2);
    a = 7;
    printf("a >>= 2 : %d\n", a >>= 2);
    a = 7;
    printf("a &= 2  : %d\n", a &= 2);
    a = 7;
    printf("a ^= 2  : %d\n", a ^= 2);
    a = 7;
    printf("a |= 2  : %d\n", a |= 2);

    printf("\n");
}