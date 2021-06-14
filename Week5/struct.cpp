#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

// declare data structure contains the customer's information
struct product {
    int weight;
    double price;
};

product apple;
product banana, melon;

int main() {
    apple.weight = 25;
    banana.weight = 30;
    cout << apple.weight << endl;
    cout << banana.weight << endl;
    return 0;
}