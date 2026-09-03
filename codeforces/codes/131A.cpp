#include <bits/stdc++.h>
using namespace std;

int main() {
    bool s = true;
    string x;
    cin >> x;
    for (int i=1;i<x.size();++i) if (islower(x[i])){s = false;break;}
    if(s) for(char &c: x) c = islower(c)?toupper(c):tolower(c);
    cout << x;
}
