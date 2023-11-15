// Learning C++ 
// Exercise 02_02
// Variables, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int a, b = 5; // single line comment
/*
 * Multiline comment
 */
int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    cout << "a = " << a << " b = " << b << " my_flag = " << my_flag << endl;
    my_flag = true;
    cout << "a + b = " << a+b << " a - b = " << a-b << " my_flag = " << my_flag <<endl;

    unsigned positive = b - a;

    cout << "b - a = " << positive << endl;

    return (0);
}
