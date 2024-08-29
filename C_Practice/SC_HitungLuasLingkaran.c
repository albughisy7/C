#include <stdio.h>
#define phi 3.14

void main()
{
    int r; // r jari jari lingkaran
    float luas;
    printf("Input jari-jari lingkaran: ");
    scanf("%d", &r);
    luas = phi * r * r;                         // rumus luas lingkaran
    printf("Luas lingkaran adalah:%.2f", luas); // cetak luas lingkaran
}