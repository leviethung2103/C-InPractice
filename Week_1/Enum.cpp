#include <iostream>
using namespace std;

//---------------------------------------------------------------- 
// define constants
enum colors{red=5, black};
enum suit{heart, diamond=8, spade=3, club};

// convert enum to string by defined user function
string enum_to_string (suit type){
    switch (type) {
        case heart: return "heart";
        case diamond: return "diamond";
        case spade: return "spade";
        case club: return "club";
        default: return "Invalid suit";
    }
}

int main() {
    cout << heart << endl;
    cout << diamond << endl;
    cout << enum_to_string(heart) << endl;
}