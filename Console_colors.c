#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //

int main()
{
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(h,10);
printf("Nome");
SetConsoleTextAttribute(h,15);
printf("\tIdade");
printf("\nAna");
SetConsoleTextAttribute(h,14);
printf("\t20");
SetConsoleTextAttribute(h, 15);
printf("\nCarlos");
SetConsoleTextAttribute(h,14);
printf("\t18");
SetConsoleTextAttribute(h, 7);
    return 0;
}