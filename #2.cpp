#include <iostream>
using namespace std;

struct Student
{
    int age;
    string name;
    string drink;
};

int main()
{
    Student arr[3];
    arr[0] = { 18, "Oleg", "whater" };
    arr[1] = { 22, "Sam", "coffe" };
    arr[2] = { 20, "Will", "beer" };

    int maxage = arr[0].age;
    for (int i = 0; i < 3; ++i)
    {
        if (arr[i].age > maxage)
        {
            maxage = arr[i].age;
        }
    };

    cout << "max age is " << maxage << endl;

    return 0;
}