#include "Student.h"
#define PI 3.14
#include <stdio.h>
#include <iostream>


#define STDIO "stdio.vn"
#define output cout << "Hello world!";
#define SUM (5+7)
#define HELLO { cout << "Hello STDIO\n"; cout << "stdio.vn 2" << endl;}

using namespace std;

int main() {
    Student Nguyen;
    Nguyen.m_id = 12;
    cout << STDIO << endl;
    output;
    cout << SUM << endl;
    cout << 2*SUM << endl;
    HELLO;
    return 0;
}