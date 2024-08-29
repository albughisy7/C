#include <stdio.h>

int main()
{
    int a = 5;
    int b = 9;
    system("cls");

    printf("PENGGUNAAN OPERATOR RELASI PADA KONDISI IF\n\n");
    if (a > b)
    {
        printf("a lebih besar dari b : Benar!\n");
    }
    else
    {
        printf("a = %d lebih besar dari b = %d : Salah!\n", a, b);
    }

    printf("\n\nPENGGUNAAN OPERATOR RELASI PADA LOOPING FOR\n\n");

    for (int i = 1; i < a; i++)
    {
        printf("Cetak nilai i : %d\n", i);
    }

    printf("\n");
}