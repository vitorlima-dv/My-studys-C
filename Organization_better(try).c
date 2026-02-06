#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    
    SetConsoleTextAttribute(h, 13);
    printf("%-25s", "Name");
    printf("%-25s", "Johan");
    printf("%-25s", "Nina");
    printf("%-25s", "Galileu Galileia");
    SetConsoleTextAttribute(h, 14);
    printf("\nAge");
    printf("\t17");
	printf("\t18");
    printf("\t20");
    printf("\t24");
    
    SetConsoleTextAttribute(h, 7);
    return 0;
}