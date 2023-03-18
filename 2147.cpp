#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        cin >> s1;
        float len = s1.length();
        float ans = len / 100;
        cout << fixed << setprecision(2) << ans << endl;
    }
}
