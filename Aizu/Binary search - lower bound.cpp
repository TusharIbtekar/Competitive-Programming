#include<iostream>

using namespace std;
int ar[100000];
int main()
{
    int i, n, q, lo, x;
    cin >> n;

    for(i = 0; i < n; i++)
        cin >> ar[i];
    cin >> q;
    for(i = 0; i < q; i++)
    {
        //cout<<"A"<<endl;
        cin >> x;
        //cout<<"B"<<endl;
        lo = lower_bound(ar, ar+n, x) - ar;
        //cout<<"C"<<i<<endl;
        cout << lo <<endl;
    }


}
/*4
1 2 2 4
3
2
3
5*/
