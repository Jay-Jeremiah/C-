#include <iostream>
#include <stdbool.h>
#include <string>
using namespace std;

int main(){
    /*syntax for variables: type variableName = value*/

    //int - stores integers
    int myAge = 15;
    cout << "I am " << myAge << "years old." << endl;

    //float - stores decimals 
    float pi = 3.14;
    cout << "The value of pi is " << pi << endl;

    //char - stores characters
    char myLetter = 'D';
    cout << "My grade is: " << myLetter << endl;

    /*bool - stores boolean(true or false)
    should also include boolean library in the header*/
    bool pass = false;
    cout << "Did you get a pass?" << pass << endl;

    /*string - stores a series of characters(text) plus
    include string library in the header section.*/
    string greeting = "Hola(Hello)";
    cout << greeting << endl;

    //double - stores decimals 
    double height = 2.2;
    cout << "I am " << height << "cm tall" << endl;

    return 0;
}