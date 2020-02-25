#include<iostream>
using namespace std;

int main()
{
    string s, t;
    int i, j, cnt = 0;
    cin>> s >> t;
    i = s.length() - 1;
    j = t.length() - 1;
    while(s[i] == t[j] && i >= 0 && j >= 0)
    {
        //cnt++;
        i--;
        j--;
    }
    //cout<< cnt << endl;
    cout << i+j+2;
}
