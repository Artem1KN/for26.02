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

    cout << "age name drink:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i].age >> arr[i].name >> arr[i].drink;
    }
    cout << endl;

    cout << "full information:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << arr[i].age << " " << arr[i].name << " " << arr[i].drink << endl;
    }

    return 0;
}