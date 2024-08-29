#include <stdio.h>

int main()
{
    int a, b, x, y;

    x = (a = 6, a * 2);
    y = (b = a + 4, b / 2);

    system("cls");

    printf("Operator Koma\n\n");

    printf("Nilai x = %d\n", x);
    printf("Nilai a = %d\n", a);
    printf("Nilai y = %d\n", y);
    printf("Nilai b = %d\n", b);
    printf("\n");
}