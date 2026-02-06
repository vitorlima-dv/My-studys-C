#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
 HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
 
 SetConsoleTextAttribute(h, 14);
printf("%-25s %-25s %-25s", "Johan", "Nina", "Galileu");
SetConsoleTextAttribute(h, 13);
printf("\n%-25d %-25d %-25d", 18, 20, 24);
    
SetConsoleTextAttribute(h, 7);
    return 0;
}