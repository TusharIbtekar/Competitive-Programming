#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n, in1[100005], in2[100005], i, j, one = 0, two = 0, zero = 0, mod1 = 0, mod2 = 0, mod0 = 0;
    scanf("%lld", &n);
    for(i = 0; i < n; i++){
        scanf("%lld", &in1[i]);
        //cout << in1[i] << endl;
        if((i+1) % 3 == 1){
            mod1 += in1[i];
        }
        else if((i+1)%3 == 2){
            mod2 += in1[i];
        }
        else if((i+1) % 3 == 0){
            mod0 += in1[i];
        }
    }
    //cout << mod1 << mod2 << mod0 << endl;
    for(i = 0; i < n; i++){
        scanf("%lld", &in2[i]);
        if((i+1) % 3 == 1){
            two += in2[i] * mod1;
            zero += in2[i] * mod2;
            one += in2[i] * mod0;
        }
        if((i+1) % 3 == 2){
            zero += in2[i] * mod1;
            one += in2[i] * mod2;
            two += in2[i] * mod0;
        }
        if((i+1) % 3 == 0){
            one += in2[i] * mod1;
            two += in2[i] * mod2;
            zero += in2[i] * mod0;
        }
    }
    printf("%lld %lld %lld\n", zero, one, two);
    return 0;
}
