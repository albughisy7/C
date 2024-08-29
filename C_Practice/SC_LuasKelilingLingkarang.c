#include <stdio.h>
#define phi 3.14

void main()
{
    int a, b;
    float luas, keliling;

    printf("masukkan jari-jari:");
    scanf("%d", &a);

    printf("\n1. Menghitung luas\n2. Menghitung keliling\nPilihan Anda? ");
    scanf("%d", &b);

    luas = phi * a * a;
    keliling = 2 * phi * a;

    if (b == 1)
    {
        printf("luas lingkaran adalah:%.2f", luas);
    }
    else if (b == 2)
    {
        printf("keliling lingkaran adalah:%.2f", keliling);
    }
    else
    {
        printf("kode yang Anda masukkan salah...!");
    }
}