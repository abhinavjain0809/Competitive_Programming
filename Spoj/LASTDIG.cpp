#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        long int b;
        cin>>a>>b;

        if(b==0){
            cout<<"1"<<endl;
            continue;
        }

        a %= 10;
        b %= 100;
        if(a==0 || a==1 || a==5 || a==6){
            cout<<a<<endl;
            continue;
        }
        if(b%4==0)      b=4;
        else{
            if((b-1)%4==0)          b=1;
            else if((b-2)%4==0)     b=2;
            else if((b-3)%4==0)     b=3;
        }
        a=pow(a,b);
        a %= 10;
        cout<<a<<endl;
    }
    return 0;
}
