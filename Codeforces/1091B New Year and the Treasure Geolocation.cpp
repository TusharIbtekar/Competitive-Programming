#include<bits/stdc++.h>
using namespace std;
vector<long long>ina;
vector<long long>inb;
vector<long long>inx;
vector<long long>iny;
int main()
{
    long long i, n, o, p, j, cnt;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> o >> p;
        inx.push_back(o);
        iny.push_back(p);
    }
    for(i = 0; i < n; i++)
    {
        cin >> o >> p;
        ina.push_back(o);
        inb.push_back(p);
    }
    sort(ina.begin(), ina.end());
    sort(inb.begin(), inb.end());
    sort(inx.begin(), inx.end());
    sort(iny.begin(), iny.end());
    cout << inx[0]+ina[ina.size()-1] << " " << iny[0]+inb[ina.size()-1] << endl;
    return 0;
}
