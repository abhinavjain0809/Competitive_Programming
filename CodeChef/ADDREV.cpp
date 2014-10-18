#include<iostream>
#include<cstdio>
using namespace std;
int rev(int);

int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        x = rev(x);
        y = rev(y);
        int res = x+y;
        res = rev(res);
        cout<<res<<endl;
    }
    return 0;
}

int rev(int x){
    int temp,n;
    n=x;
    x=0;
    while(n!=0){
        temp = n%10;
        x = x*10 + temp;
        n /= 10;
    }
    return x;
}
