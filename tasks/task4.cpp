#include "classes.hpp"

#include <iostream>

Line::Line(int x1, int y1, int x2, int y2):
DotFirst(*(new Dot(x1, y2))),
DotSecond(*(new Dot(x2, y2)))
{}

void Task4_1() {
    Dot d1 = Dot(3, 5);
    Dot d2 = Dot(25, 6);
    Dot d3 = Dot(7, 8);
    std::cout << "Dots: " << std::endl;
    d1.Print();
    std::cout << std::endl;
    d2.Print();
    std::cout << std::endl;
    d3.Print();
    std::cout << std::endl;
}

void Task4_2() {
    Dot dot1_1(1, 3);
    Dot dot1_2(23, 8);
    Line first_line = Line(dot1_1, dot1_2);

    Dot dot2_1 (5, 10);
    Dot dot2_2(25, 10);
    Line second_line = Line(dot2_1, dot2_2);

    Line third_line = Line(dot1_1, dot2_2);

    std::cout << "The lines: ";
    std::cout << std::endl;
    first_line.Print();
    std::cout << std::endl;
    second_line.Print();
    std::cout << std::endl;
    third_line.Print();
    std::cout << std::endl;
}
