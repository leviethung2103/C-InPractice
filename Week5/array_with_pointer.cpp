#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

void printArray(int *array, int length)
{
    for (int i=0; i < length; i++)
    {
        cout << array[i] << endl;
    }
    cout << endl;
}

int main() {
    // declare an array of
    int iArr[] = {3,2,5,1,7,10,32};
    printArray(iArr, sizeof(iArr) / sizeof(int)); 
    return 0;
}