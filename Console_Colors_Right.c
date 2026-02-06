#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //

int main()
{
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(h, 7);
printf("%-15s", "Name");
printf("Age\n");
SetConsoleTextAttribute(h, 2);
printf("%-15s", "Obladi");
SetConsoleTextAttribute(h, 11);
printf("20\n");
SetConsoleTextAttribute(h, 2);
printf("%-15s", "Dimetreous");
SetConsoleTextAttribute(h, 11);
printf("18\n");
SetConsoleTextAttribute(h, 2);
printf("%-15s", "Johan");
SetConsoleTextAttribute(h,11);
printf("18\n");

SetConsoleTextAttribute(h, 15);
    return 0;
}