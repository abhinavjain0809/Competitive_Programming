#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        static int a[200];
        int m=1;
        a[0]=1;
        int temp=0;
        for(int i=1;i<=n;i++){
            int y=m,k=0;
            while(y!=0){
                int x = a[k]*i + temp;
                a[k++] = x%10;
                temp = x/10;
                y--;
            }
            while(temp>0){
                a[k++] = temp%10;
                temp /= 10;
                m++;
            }
        }
        for(int i=m-1;i>=0;i--)    cout<<a[i];
        cout<<endl;
    }
    return 0;
}
