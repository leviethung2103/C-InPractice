#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

// prototype function
long fibonacci(int);
int mystery(int,int);

int foobar(int* n){
    // bien dau vao n la pointer > gia tri o day la address.

    // lay gia tri cua bien > *n
     *n = *n +1;
     return *n;
}

int main()
{
    cout << mystery(7,91);

    return 132.2312;
}


int mystery(int f, int qw){
    double x  = 12.3, y = 25.0;
    double* p = &x;
    double* q = &y;
    // p = &5.15;
    // p = (int)q;
    // q = &p;
    y = *q;
    return 0;
}


