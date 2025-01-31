#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string a = "hatti";
    string b = a + a;
    cout << b << "\n"; // hattihatti
    b[5] = 'v';
    cout << b << "\n"; // hattivatti
    string c = b.substr(3, 4);
    cout << c << "\n"; // tiva
}