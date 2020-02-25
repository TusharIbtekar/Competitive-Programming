#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cs = 0, t, n;
    cin >> t;
    while(t--)
    {
        int xmin = -1, xmax = 9999, ymin = -1, ymax = 9999, zmin = -1, zmax = 9999, ans = 0;
        int x1, y1, z1, x2, y2, z2;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            xmin = max(xmin, x1);
            xmax = min(xmax, x2);
            ymin = max(ymin, y1);
            ymax = min(ymax, y2);
            zmin = max(zmin, z1);
            zmax = min(zmax, z2);
        }
        ans = -1*(xmin-xmax)*(ymin-ymax)*(zmin-zmax);
        //cout << ans << endl;
        if(ans > 0)
            cout << "Case " << ++cs << ": " << ans << endl;
        else
            cout << "Case " << ++cs << ": " << "0" << endl;
    }

}
