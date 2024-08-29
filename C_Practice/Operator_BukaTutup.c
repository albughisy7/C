#include <stdio.h>

int main()
{
    system("cls");
    int a = 8;
    int b = 9;
    int c = 3;
    int hasil;

    printf("OPERATOR BUKA TUTUP\n\n");

    hasil = a * b + c;
    printf("Hasil dari a * b + c : %d \n", hasil);

    hasil = (a * b) + c;
    printf("Hasil dari (a * b) + c : %d \n", hasil);

    hasil = a * (b + c);
    printf("hasil dari a * (b + c) : %d \n", hasil);

    printf("\n");
}