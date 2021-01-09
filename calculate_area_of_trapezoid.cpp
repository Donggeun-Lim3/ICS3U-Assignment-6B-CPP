// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by: Donggeun Lim
// Created on: Jan 2021
// This program calculates area of trapezoid


#include <iostream>
#include <string>
#include <cmath>


float CaculateArea(int base, int height, int top) {
    // this function calculate area of trapezoid

    float area;

    // process
    area = base * top * height * 0.5;

    return area;
}


main() {
    // this function gets base, top and height

    std::string base;
    std::string top;
    std::string height;
    int integerAsBase;
    int integerAsHeight;
    int integerAsTop;
    float area;

    // input
    std::cout << "Enter the base of trapezoid: ";
    std::cin >> base;
    std::cout << "Enter the top of trapezoid: ";
    std::cin >> top;
    std::cout << "Enter the height of trapezoid: ";
    std::cin >> height;
    std::cout << std::endl;

    // call function
    try {
        integerAsBase = std::stoi(base);
        integerAsTop = std::stoi(top);
        integerAsHeight = std::stoi(height);
        if (integerAsBase > 0 && integerAsTop > 0 && integerAsHeight) {
            area = CaculateArea(integerAsBase, integerAsTop, integerAsHeight);
            std::cout << "The area of trapezoid is " << area << " m³"
                      << std::endl;
        } else {
            std::cout << "Theses number are minus" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not an integer";
    }
}
