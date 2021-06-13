#include <stdio.h>
#include <iostream>
using namespace std;

#define ARRAY_SIZE 15


int main()
{
	// char *char_ptr = "Look Here";
    // char char_array[] = "Look Here";
    char char_array[ARRAY_SIZE] = "Look Here";


    /* Warning: uncommenting the following line will trigger undefined behaviour */
	/* char_ptr[4] = '_'; */
	cout << (char_array) << endl;
    cout << char_array[8];

	return 0;
}
