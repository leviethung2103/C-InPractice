#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int i = 1, j = 2;
    // n  = (i<j)? 4:6;
    // n = (i,j);
    n = i, j+1;  
    cout << n << endl;
}