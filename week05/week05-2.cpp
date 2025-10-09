///week05-2
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    cout << "請輸入一段英文, 裡面可有空格: ";
    string s;
    getline(cin, s);
    cout << "讀到了s字串:"<< s << endl;

    stringstream ss (s);
    string word;
    while ( ss >> word){
        cout << "有1個字:"<< word << endl;
    }
}
