#include<bits/stdc++.h>
using namespace std;
int ar[105];
vector<int>v;
int main()
{
    int n, i, flag = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    for(i = 0; i < 100; i++)
    {
        flag = 0;
        v.push_back(ar[0]+i);
        for(int j = 1; j < n; j++)
        {
            if(ar[j] > v[j-1])
            {
                v.push_back(ar[j]-i);
                //v.push_back(ar[j+1]+i);
                //j++;
            }
            else if(ar[j] < v[j-1])
            {
                v.push_back(ar[j]+i);
                //v.push_back(ar[j+1]-i);
                //j++;
            }
            else
                v.push_back(ar[j]);
        }
        for(int k = 0; k < v.size()-1; k++)
        {
            //cout << v[k] << " ";
            if(v[k] != v[k+1])
            {
                flag = 1;
                v.clear();
                break;
            }
        }
        //cout << endl;
        if(!flag)
            break;
    }
    if(i == 100)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << i << endl;
}
