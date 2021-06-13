#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;


long factorial(int n) {
    if (n > 1) 
        // in here we dont need to declare a new 
        return (n*factorila(n-1));
    else
        return 1;
}


long factorial(int n) {
    long f = 1;
    int i;

    for (i=1; i<=n; i++){
        f = f*i;
    }
    return f;

}

int main()
{
    long result = factorial(6);
    cout << result << endl;
    return 0;
}