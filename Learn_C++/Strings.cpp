#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "String";
    int len = s.size();
    s[len-1] = 's'; // '' for char "" for string
    cout << s[len-1];
    return 0;
}