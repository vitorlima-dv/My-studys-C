#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // 1. Biblioteca obrigatória 
int main()
{   
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
	printf("Nome"); printf("\tAna"); printf("\tCarlos");
	SetConsoleTextAttribute(h, 20);
    printf("\nIdade"); printf("\t20"); printf("\t18");
    return 0;
}