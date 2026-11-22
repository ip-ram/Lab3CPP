#include <vector>
#include <string>
//Task 1
struct Dot {
    private:
       int X, Y;
    public:
        Dot(int x, int y) ;
        void MoveDot(int x, int y);
        void Print();
        void SetX(int x);
        void SetY(int y);
        void SetCord(int x, int y);
};

void Task1_1();

//Task 2
enum struct DotVariant {
    DotFirst,
    DotSecond,
};

struct Line {
    private:
        Dot& DotFirst;
        Dot& DotSecond;
    public:
        Line(Dot& dot_first, Dot& dot_second);
        Line(int x1, int y1, int x2, int y2);
        void MoveDots(int x1, int y1, int x2, int y2);
        void MoveDot(DotVariant dot_variant, int x, int y);
        void Print();
};

void Task2_1();

//task 3
struct Student {
    private:
        std::string FirstName;
        std::vector<int> Grade;
    public:
        Student(std::string first_name);
        Student(std::string first_name, std::vector<int> grade);
        void AddGrades(std::vector<int> grade);
        void AddGrade(int grade);
        void PrintGrade();
        std::vector<int> GetGrade();
        void SetGrade(int index, int grade);
};

void Task3_1();

//task 4_1
void Task4_1();
void Task4_2();

//task 5_1
struct Gun{
    private:
        int bullet;
    public:
        Gun();
        Gun(int bullet_count);
        void TryShoot();

};

void Task5_1();
