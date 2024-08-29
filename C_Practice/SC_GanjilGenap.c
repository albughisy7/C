#include <stdio.h>

int main()
{
    int angka;
    printf("Input suatu bilangan: ");
    scanf("%d", &angka);

    if (angka % 2 == 0)
    {
        printf("Angka %d adalah bilangan genap", angka);
    }
    else
    {
        printf("Angka %d adalah bilangan ganjil", angka);
    }
}