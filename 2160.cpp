#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int l = s.length();
    if (l <= 80)
    {
        cout << "YES" << endl;
    }
    else if (l > 80)
    {
        cout << "NO" << endl;
    }
}
