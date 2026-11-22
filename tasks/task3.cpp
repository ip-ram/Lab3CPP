#include "classes.hpp"

#include <iostream>

Student::Student(std::string first_name)
: FirstName(first_name)
{}

Student::Student(std::string first_name, std::vector<int> grade):
FirstName(first_name),
Grade(grade)
{}

void Student::PrintGrade() {
    std::cout << this-> FirstName << ": [";
    for (int i = 0; i < this->Grade.size(); i++) {
        std::cout << this->Grade[i];

        if (i < this->Grade.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

void Student::AddGrades(std::vector<int> grades) {
    for (auto i = grades.begin(); i != grades.end(); i++) {
        this->Grade.push_back(*i);
    }
}

std::vector<int> Student::GetGrade() {
    return this->Grade;
}

void Student::SetGrade(int index, int grade) {
    this->Grade[index] = grade;
}

void Task3_1() {
    Student Vasya = Student("Vasya");
    std::vector<int> grades = {3, 4, 5};
    Vasya.AddGrades(grades);
    Student Petya = Student("Petya", Vasya.GetGrade());

    std::cout << "Before changing" << std::endl;
    Vasya.PrintGrade();
    std::cout << std::endl;
    Petya.PrintGrade();
    std::cout << std::endl;

    Petya.SetGrade(0, 5);
    std::cout << "After changing" << std::endl;
    Vasya.PrintGrade();
    std::cout << std::endl;
    Petya.PrintGrade();
    std::cout << std::endl;


    Student Andrew = Student("Andrew", Vasya.GetGrade());

    std::cout << "After Andrew" << std::endl;
    Vasya.PrintGrade();
    std::cout << std::endl;
    Petya.PrintGrade();
    std::cout << std::endl;
    Andrew.PrintGrade();
    std::cout << std::endl;

    Vasya.SetGrade(0, 2);
    std::cout << "After Vasya changing" << std::endl;
    Vasya.PrintGrade();
    std::cout << std::endl;
    Petya.PrintGrade();
    std::cout << std::endl;
    Andrew.PrintGrade();
    std::cout << std::endl;
}
