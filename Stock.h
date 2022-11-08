//
// Created by romat on 10/24/2022.
//

#ifndef UNTITLED3_STOCK_H
#define UNTITLED3_STOCK_H

#include <string>
#include <iostream>

class Stock {

public:
    std::string name;
    int count;
    double cost;

    Stock(std::string name, int count, double cost) {
        this->name = name;
        this->count = count;
        this->cost = cost;
    }

/*public:
    void acquire(std::string a, int b, double c) {
        //a)	Функция acquire выполняет обработку первоначального вклада конкретной компании,
        // запоминая информацию о наименовании компании, количестве акций в пакете, цене каждой акции данного пакета
        // и вычисляя общую стоимость пакета акций с помощью функции set_tot();

    }
*/
public:
    int buy(int count) {
        this->count = this->count + count;
        //Функция  buy() предназначена для приобретения дополнительных акций;

        return count;
    }

public:
    double sell(int count) {
        this->count = this->count - count;
        //Функция  sell() предназначена для продажи акций;

        return count;
    }

public:
    double update(double cost) {
        //Функция  update() корректирует стоимость одной акции и пересчитывает общую стоимость акций;
        this->cost = cost;
    }

public:
    void show() {
        std::cout << "Name of the company: " << this->name << "\nNumber of shares: " << this->count << "\nShare price: "
                  << this->cost << std::endl;

    }
public:
    void showArrays(Stock *str) {
        std::cout << "Name of the company: " << str->name << "\nNumber of shares: " << str->count << "\nShare price: "<< str->cost<< std::endl;
    }


public:
    double set_tot() {
        double totalCost = (double) this->count * this->cost;
        return totalCost;
    }


};


#endif //UNTITLED3_STOCK_H
