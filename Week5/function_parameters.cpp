#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

void swapIntValue(int *ptr1, int *ptr2)
{
	// con tro lam tham so cho ham > thay doi gia tri cua bien ma con tro dang tro toi. 
	// thong qua deference operator.

	int temp = *ptr1;
	*ptr1 = *ptr2;  // get the value
	*ptr2 = temp;
}

int main()
{
	int value1 = 2;
	int value2 = 5;
	cout << value1 << " " << value2 << endl;
	swapIntValue(&value1, &value2);
	cout << value1 << " " << value2 << endl;
	return 0;
}