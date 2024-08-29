#include <stdio.h>

int main()
{
    int a = 5;
    system("cls");

    printf("Post-Increment\n\n");
    printf("Nilai a++ : %d\n", a++);
    printf("Nilai a   : %d \n \n", a);

    a = 5;
    printf("Pre-Increment\n\n");
    printf("Nilai ++a : %d\n", ++a);
    printf("Nilai a   : %d \n \n", a);

    a = 5;
    printf("Post-Decrement\n\n");
    printf("Nilai a-- : %d\n", a--);
    printf("Nilai a   : %d \n \n", a);

    a = 5;
    printf("Pre-Decrement\n\n");
    printf("Nilai --a : %d\n", --a);
    printf("Nilai a   : %d \n \n", a);
}