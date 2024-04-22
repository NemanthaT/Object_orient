#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.142

int main(){
    int r;
    string x="C++ is an object oriented language.\nIts is a collection of commands\n";
    cout << x;
    cout << "Enter the value of radius: ";
    cin >> r;
    float area;
    float volume;
    area = 4 * pi * (r*r);
    volume = (4/3) * pi * (r*r*r);
    cout << "The area of the sphere is: " << area << endl;
    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}