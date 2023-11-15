#include "records.h"
#include <string>

std::string Student::get_name() {
    return name;
}

int Student::get_id() {
    return id;
}

Student::Student(int the_id, std::string the_name) {
    id = the_id;
    name = the_name;
}

int Course::get_id() {
    return id;
}

std::string Course::get_name() {
    return name;
}

int Course::get_credits() {
    return credits;
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits) {
    id = the_id;
    name = the_name;
    credits = the_credits;
}

int Grade::get_course_id() {
    return course_id;
}

int Grade::get_student_id() {
    return student_id;
}

char Grade::get_grade() {
    return grade;
}

Grade::Grade(int sid, int cid, char grd) {
    student_id = sid;
    course_id = cid;
    grade = grd;
}