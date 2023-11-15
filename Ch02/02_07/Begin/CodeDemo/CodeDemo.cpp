// Learning C++ 
// Exercise 02_07
// Arrays, by Eduardo Corpeño 

#include <iostream>

using namespace std;
int age[4];
float temperature[] = {31.5, 32.7, 38.9};
int main(){
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;
    cout << "age[0] is " << age[0] << " age[1] is " << age[1] << " age[2] is " << age[2] << " age[3] is " << age[3] << endl;
    return (0);
}
