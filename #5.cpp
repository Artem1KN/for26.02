#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    string value;
    int wins;
};

int Game(string firstVal, string secondVal)
{
    if (firstVal == "stone") {
        if (secondVal == "scissors") return 1;
        if (secondVal == "paper") return 0;
    }

    if (firstVal == "scissors") {
        if (secondVal == "stone") return 0;
        if (secondVal == "paper") return 1;
    }

    if (firstVal == "paper") {
        if (secondVal == "scissors") return 0;
        if (secondVal == "stone") return 1;
    }

    return 0;
}


int main()
{
    Student mas[4];

    mas[0] = { "Sam", "stone", 0 };
    mas[1] = { "Tom", "scissors", 0 };
    mas[2] = { "Van", "stone", 0 };
    mas[3] = { "Gon", "paper", 0 };

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {

            if (i == j) continue;
            else
            {
                string firstVal = mas[i].value;
                string secondVal = mas[j].value;
                mas[i].wins += Game(firstVal, secondVal);
                mas[j].wins += Game(secondVal, firstVal);
            }
        }
    }

    int maxWins = mas[0].wins;
    int winner = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (maxWins <= mas[i].wins)
        {
            maxWins = mas[i].wins;
            winner = i;
        }
    }

    cout << "WINER - " << mas[winner].name
        << " wins: " << mas[winner].wins / 2 << endl;

    return 0;
}