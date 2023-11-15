//
// Created by kdMot on 2023-11-14.
//

#ifndef C__COURSE_COW_H
#define C__COURSE_COW_H
#include <string>



enum cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, unsigned char purpose_i);
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
    void set_age(int new_age);
private:
    std::string name;
    int age;
    unsigned char purpose;
};

#endif //C__COURSE_COW_H
