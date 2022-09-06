#include <iostream>
#include <cmath>
using namespace std;
float number;
int main()
{
    cout << "Give a number: " << endl;
    cin >> number;
    cout << "Round:" << round(number) <<endl;
    cout << "Ceil:" << ceil(number) <<endl;
    cout << "Floor:" << floor(number) <<endl;
    cout << "Trunc:" << trunc(number) <<endl;
    return 0;
}
