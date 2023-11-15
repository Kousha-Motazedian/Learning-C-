// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <utility>

using namespace std;

enum cow_purpose {dairy, meat, hide, pet};

class cow{
private:
    string name;
    int age;
    unsigned char purpose;
public:
    cow(int a, string n, unsigned char p) {
        name = n;
        age = a;
        purpose = p;
    }

    int get_age() {
        return age;
    }
    string get_name() {
        return name;
    }

    unsigned char get_purpose() {
        return purpose;
    }

};

int main(){
    cow my_cow(5, "Betsy", dairy);
    cout << my_cow.get_name() << " is a type-" << (cow_purpose)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    return (0);
}
