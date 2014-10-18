#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;
int cmp(const void *, const void *);

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int m[n],f[n];
        for(int i=0;i<n;i++)    cin>>m[i];
        for(int i=0;i<n;i++)    cin>>f[i];
        qsort(m, n, sizeof(int), cmp);
        qsort(f, n, sizeof(int), cmp);
        int max = 0;
        for(int i=0;i<n;i++){
            max += m[i]*f[i];
        }
        cout<<max<<endl;
    }
}

int cmp(const void *x, const void *y)
{
    return (*(int*)x - *(int*)y);
}
