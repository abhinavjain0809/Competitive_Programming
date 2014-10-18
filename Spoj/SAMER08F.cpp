#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
        int res=0;
        for(int i=n;i>=1;i--){
            res += pow(i,2);
        }
        cout<<res<<endl;
        cin>>n;
    }
    return 0;
}
