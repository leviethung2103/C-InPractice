#include <iostream>
using namespace std;
class Animal
{
public:
    void function()
    {
        cout << "Eating..." << endl;
    }

};

// Ke thua` 
class Man : public Animal
{
public:
    void function()
    {
        cout << "Walking ..." << endl;

    }
    void abc1 () {
        abc(); 
    }
private:
    void abc () {
        cout << "Abc cof Man" << endl;
    }

};


int main(void)
{
    Animal A = Animal();
    A.function(); //parent class object
    Man m = Man();
    m.function(); // child class object
    m.abc1();
    return 0;
}
