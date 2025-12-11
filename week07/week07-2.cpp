#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i=1; i<n*2; i++) {
        for (int j=1; j<n*2; j++) {
            int d = max(abs(i-n), abs(j-n));
            cout << d + 1;
        }
        cout << endl;
    }
}
