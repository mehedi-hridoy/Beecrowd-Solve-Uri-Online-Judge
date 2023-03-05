#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int r, w, l, test_case = 1;
    
    while (true) {
        cin >> r;
        if (r == 0) {
            break;
        }
        
        cin >> w >> l;
        
        double diagonal = sqrt(w * w + l * l);
        if (diagonal <= 2 * r) {
            cout << "Pizza " << test_case << " fits on the table." << endl;
        } else {
            cout << "Pizza " << test_case << " does not fit on the table." << endl;
        }
        
        test_case++;
    }
    
    return 0;
}
