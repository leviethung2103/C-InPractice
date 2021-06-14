#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;


// Sort the elements by alternative fashion of
// the odd numbers (so le) appear first and the even numbers appear later. 
// The odd numbers should be sorted in descending order, and the even numbers should be sorted in ascending order.


// Let's say, I want to sort the student based on their marks.
// solution is https://www.geeksforgeeks.org/comparator-function-of-qsort-in-c/ 

int comparator(const void *p, const void *q) {
    // get the values at given addresses
    const int l = *(const int*)p;
    const int r = *(const int*)q;

    // both odd numbers
    if ((1&l) && (1&r))
    {   
        cout << "r-l" << (r-l) << endl;
        return (r-l);
    }

    // both even numbers
    if (!(1&l) && !(1&r))
        return (l-r);

    // l is even, put r first
    if (!(1&l))
    {
        cout << l << endl;
        // return l;
        return 1;
    }
    
    // l is odd, put l first
    cout << (-l) << endl;
    // return -l;
    return -1;

    // if (l % 2 == 0  &&  r % 2 ==0)
    //     // even
    //     return 1; 
    // else if (l % 2 !=0  &&  r % 2 != 0)
    //     // odd
    //     return -1; 
    // else if (l % 2 == 0)
    //     return -1;  // the element pointed to by p1 goes after the element pointed to by p2
}

// A utility function to print an array 
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) 
        cout << arr[i] << endl;
}

struct Student {
    int age, marks;
    char name[20];
};

int main() {
    int arr[] = {1,6,5,2,3,9,4,7,8};

    cout << (1&2) << endl;

    

    // number of elements
    int size = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, size, sizeof(int), comparator);


    cout << "Output array is " << endl;
    printArray(arr, size);

    return 0;
}