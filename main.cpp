#include <iostream>
#include "Student.h"
#include "Stock.h"


int main() {
    Student *alex = new Student("Alex", 3);
    alex->setCourse(4);

    std::cout << "Name of student: " << alex->getName() << std::endl;
    std::cout << "Course of student: " << alex->getCourse() << std::endl;

    Stock *stock1 = new Stock("IT.ONE", 100, 90.25);
    double sum1 = stock1->set_tot();
    std::cout << sum1 << std::endl;
    stock1->buy(15);
    stock1->sell(10);
    std::cout << stock1->count << std::endl;
    double sum2 = stock1->set_tot();
    std::cout << sum2 << std::endl;
    stock1->update(50);
    std::cout << stock1->cost << std::endl;

    double sum3 = stock1->set_tot();
    std::cout << sum3 << std::endl;
    stock1->show();
    Stock arrayStock[] = {Stock("it", 10, 10), Stock("it1", 20, 20),
                          Stock("it3", 30, 30), Stock("it4", 40, 40),
                          Stock("it3", 50, 50)};
    for(auto array: arrayStock) {
        arrayStock->showArrays(&array);
    }

    }



