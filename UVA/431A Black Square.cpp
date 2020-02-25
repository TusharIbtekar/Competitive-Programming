#include<iostream>
using namespace std;
int main()
{
    int i, a, b, c, d, sum = 0;
    string str;
    cin >> a >> b >> c >> d;
    cin >> str;
    for(i = 0; i < str.size(); i++)
    {
        if(str[i] == '1')
            sum += a;
        else if(str[i] == '2')
            sum += b;
        else if(str[i] == '3')
            sum += c;
        else
            sum += d;
    }
    cout << sum << endl;
}
