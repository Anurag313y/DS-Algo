////////////Class////////////////////
#include <bits/stdc++.h>
using namespace std;

class student
{
    //private member
    string name;

public:
    int salary;

    void setName(string s)
    {
        //setting private  member
        name = s;
    }
    void print()
    {
        cout << name;
        cout << salary;
        cout << endl;
    }
};
int main()
{
//className         object
    student         arr[2];
    for (int i = 0; i < 2; i++)
    {
        string s;
        cout << "name";
        cin >> s;
        arr[i].setName(s);
        cout << "salary";
        cin >> arr[i].salary;
    }
    for (int i = 0; i < 2; i++)
    {
        arr[i].print();
    }

    return 0;
}