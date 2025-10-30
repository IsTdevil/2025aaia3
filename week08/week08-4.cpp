#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    cout << "輸入任意4位數";
    int n ;
    cin >> n;
    for(int i=0; i<7; i++){
        vector<int> a;
        while (n>0){
            a.push_back(n%10);
            n = n / 10;
        }
        sort( a.begin(), a.end());
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
        n = M - m;
        cout << M << "減掉" << m <<"得到:" << n<< endl;
    }
}
