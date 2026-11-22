#include "classes.hpp"

#include <string>
#include <iostream>

Line::Line(Dot& dot_first, Dot& dot_second) :
DotFirst(dot_first),
DotSecond(dot_second)
{}

void Line::Print() {
    std::cout << "Line from ";
    DotFirst.Print();
    std::cout << " to ";
    DotSecond.Print();
}

void Line::MoveDots(int x1, int y1, int x2, int y2) {
    this->MoveDot(DotVariant::DotFirst, x1, y1);
    this->MoveDot(DotVariant::DotSecond, x2, y2);
}

void Dot::SetCord(int x, int y) {
    this->X = x;
    this->Y = y;
}

void Dot::SetX(int x) {
    this->X = x;
}

void Dot::SetY(int y) {
    this->Y = y;
}

void Line::MoveDot(DotVariant dot_variant, int x, int y) {
    switch (dot_variant) {
        case DotVariant::DotFirst: DotFirst.SetCord(x, y) ; break;
        case DotVariant::DotSecond: DotSecond.SetCord(x, y); break;
    }
}

void Task2_1() {
    std::string s;

    Dot dot1_1(1, 3);
    Dot dot1_2(23, 8);
    Line first_line = Line(dot1_1, dot1_2);

    Dot dot2_1 (5, 10);
    Dot dot2_2(25, 10);
    Line second_line = Line(dot2_1, dot2_2);

    Line third_line = Line(dot1_1, dot2_2);

    std::cout << "Lines before changing: ";
    std::cout << std::endl;
    first_line.Print();
    std::cout << std::endl;
    second_line.Print();
    std::cout << std::endl;
    third_line.Print();
    std::cout << std::endl;

    first_line.MoveDots(100, 200, 300, 400);
    second_line.MoveDots(111, 222, 333, 444);

    std::cout << "Line after first changing: ";
    std::cout << std::endl;
    first_line.Print();
    std::cout << std::endl;
    second_line.Print();
    std::cout << std::endl;
    third_line.Print();
    std::cout << std::endl;

    first_line.MoveDot(DotVariant::DotSecond, 1, 2);

    std::cout << "Line after second changing: ";
    std::cout << std::endl;
    first_line.Print();
    std::cout << std::endl;
    second_line.Print();
    std::cout << std::endl;
    third_line.Print();
    std::cout << std::endl;
}
