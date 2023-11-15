// Learning C++ 
// Exercise 02_09
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <cstdint>

using namespace std;

float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main(){
    sgn = flt;
    unsgn = sgn;

    cout << "flt: " << flt << endl;
    cout << "sgn: " << sgn << endl;
    cout << "unsgn: " << unsgn << endl;

    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    cout << "fahrenheit = " << fahrenheit << endl;
    cout << "celsius = " << celsius << endl;

    float weight = 10.99;
    cout << "float " << weight << endl;
    cout << "int " << (int)weight << endl;
    cout << "Frantional Part " << weight - (int)weight << endl;



    return (0);
}
