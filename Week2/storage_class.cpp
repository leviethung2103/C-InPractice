// #include <conio.h>
#include <stdio.h>
void Display();

int i; 

int main()
{
    Display();
    printf("\n i = %d", i); // error
    // getch();
}

void Display()
{
    for (i = 0; i < 10; i++)
        printf("\n %d", i);
}


