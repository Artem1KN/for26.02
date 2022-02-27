#include <iostream>
#include <cmath>
using namespace std;

struct Student
{
    int age;
    string name;
    string drink;
};

bool prime(int num)
{
    for (int i = 2; i < (int)pow(num, 0.5) + 1; ++i)
    {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    Student stud[3];
    stud[0] = { 18, "Oleg", "whater" };
    stud[1] = { 19, "Sam", "coffe" };
    stud[2] = { 20, "Will", "beer" };
    cout << "who has prime digit age " << endl;

    for (int i = 0; i < 3; ++i)
    {
        if (prime(stud[i].age))
        {
            cout << stud[i].name << " " << stud[i].drink << endl;
        }
    }

    return 0;
}
