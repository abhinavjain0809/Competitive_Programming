#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

class LCMRange
{
public:
int lcm(int first, int last) {
    int i=1,flag;
    int num=last;
    while(1){
        flag=1;
        num = last*i;
        for(int j=first;j<last;j++){
            if(num%j!=0){
                flag=0;
                break;
            }
        }
        if(flag){
            return num;
        }
        i++;
    }
}
};
// BEGIN CUT HERE
int main()
{
    LCMRange ob;
    cout<<ob.lcm(1,5)<<endl;
// END CUT HERE
}
