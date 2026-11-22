#include "../ilib/mod.hpp"
#include "classes.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

void Dot::Print() {
    std::cout << "{" << this->X << ";" << this->Y << "}";
}



Dot::Dot(int x, int y) {
    this->X =x;
    this->Y = y;
}

void Task1_1() {
    std::string s;
    const int COUNT_DOT = 3;

    std::vector<Dot> dots;
    for (int i = 0; i < COUNT_DOT; i++) {
        std::cout << "Enter " << i+1 << " dot: ";
        std::getline(std::cin, s);
        auto res = split_to_whitespace<int>(s, 2).Unwrap();
        dots.push_back(Dot(res[0], res[1]));
    }
    int count = 0;
    for (auto i = dots.begin(); i != dots.end(); i++, count++) {
        std::cout << "The " << count+1 << " dot is: ";
        i->Print();
        std::cout << std::endl;
    }
}
