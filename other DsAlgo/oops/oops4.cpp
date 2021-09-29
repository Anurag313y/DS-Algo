////operator overloading///////
#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int r=0 , int i=0)
    {
        real = r;
        imag = i;
    }

    //operator overloading
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void print()
    {
        cout << real << "+ i" << imag << "\n";
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    // add two objects
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}