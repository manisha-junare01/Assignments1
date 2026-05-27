#include<stdio.h>

void Display()
{
    int i = 0;
    int iNo = 5;

    while(i=1 <= iNo)
    {
        printf("%d ",iNo);
        iNo--;
    }
}

int main()
{
    Display();
    return 0;
}

/*
OUTPUT
c:\Users\Admin\OneDrive\Desktop\LB\Assignments>gcc Assignments3.c -o myexe

c:\Users\Admin\OneDrive\Desktop\LB\Assignments>.\myexe
5 4 3 2 1*/