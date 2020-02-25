#include<iostream>

using namespace std;
int ar[100000], n;

int lo_index(int x)
{
    int hi, lo, mid, i, index;
    lo = 0;
    hi = n-1;
    while(lo <= hi)
    {
        cout<<"cam"<<endl;
        mid = (hi+lo)/2;
//        if(ar[mid] == x)
//        {
//            index = mid;
//            hi = mid - 1;
//        }
        if(ar[mid] < x)
        {
            lo = mid+1 ;
        }
        else if(ar[mid] >=  x)
        {
            hi = mid -1;
            index = mid;

        }
    }
    //cout<<"ans"<<lo<<endl;
    return lo;
}
int main()
{
    int i, q, lo, x;
    cin >> n;

    for(i = 0; i < n; i++)
        cin >> ar[i];
    cin >> q;
    for(i = 0; i < q; i++)
    {
        cin >> x;
        lo = lo_index(x);
        cout << lo <<endl;
    }


}

