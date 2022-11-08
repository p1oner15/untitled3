//
// Created by romat on 10/24/2022.
//

#ifndef UNTITLED3_STUDENT_H
#define UNTITLED3_STUDENT_H


#include <string>

class Student {

    std::string name;
    int course;

    void setName(std::string name) {
        this->name = name;
    }

public:
    Student(std::string name, int course) {
        this->name = name;
        this->course = course;

    }

    int getCourse() {
        return this->course;
    }

    std::string getName() {
        return this->name;
    }

    void setCourse(int course) {
        this->course = course;
    }
};


#endif //UNTITLED3_STUDENT_H
