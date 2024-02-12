#include <iostream>
using namespace std;
int main()
{
    int radius;
    cout << "Enter the radius : " << endl;
    cin >> radius;
    int height;
    cout << "Enter the height : " << endl;
    cin >> height;
    float pi = 3.14;
    float volume = pi * radius * radius * height;
    cout << "The volume of cylinder is : " << volume;
    return 0;
}