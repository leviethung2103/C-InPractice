#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;


// ----------------------------------------------------------------
// base: this is the pointer to the first element of the array to be sorted. 
// nitems: the number of elements
// size in bytes of each element in the array.
// compar: the function that compares two elements.


// ! Pickup one of two compartor

int comparator(const void *a, const void*b){
    // ascending : tang dan > return -4 
    return (*(int*)a - *(int*)b);
}

int comparator(const void *a, const void*b){
    // descending : giamg dan 9 8 7 6 5 4 3 2 21 
    return (*(int*)b - *(int*)a);
}


void print_array(int array[], int elements)
{
    // array: will be the same as the input, any modification will after the original one.
    // int size = sizeof(array) / sizeof(array[0]);
    // ! Dangerous: sizeof array is not correct 
    for (int i = 0; i < elements; i++){
        cout << array[i] << endl;
    };
}


int main () 
{

    int c, *pc; 


    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    // check the length of array, arr[0] = 4 
    int size = sizeof(arr) / sizeof(arr[0]);

    // qsort(&arr[0] , size, size_in_byte ,comparator);
    qsort(arr , size, sizeof(int) ,comparator);


    // qsort(&arr[0] , size, sizeof(arr[0]),comparator);
    // qsort((void*) arr, size, sizeof(arr[0]),comparator);
    cout << "Before" << endl;
    print_array(arr, size);

    // Second Method: Using range-based for-loop, staring from C++11
    // for (const auto &value: arr) {
    //     cout << value << endl;
    // }


}