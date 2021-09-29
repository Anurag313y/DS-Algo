////////////Inheritance////////////////////
#include <bits/stdc++.h>
using namespace std;

class top
{
public:
    string colour;
    int height;
    void setName(string s)
    {
        colour = s;
    }
};

class bottom : public top
{
};
int main()
{

    bottom b;
    b.colour = "red";
    b.height = 100;
    cout << b.colour;

    return 0;
}