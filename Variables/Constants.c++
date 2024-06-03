#include <iostream>
using namespace std;

int main(){
    //constants are values that can't be changed.
    //denoted with a const keyword

    const double pi = 3.14;
    pi = 3.15;    // brings about an error

    cout << pi << endl;

    return 0;
}