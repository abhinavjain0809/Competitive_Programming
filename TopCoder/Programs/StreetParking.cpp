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

class StreetParking
{
public:
int freeParks(string street) {
    bool park[street.size()];
    for(int i=0;i<street.size();i++){
        if(street[i+1]!='D' && street[i+1]!='B' && street[i+2]!='B' && street[i+3]!='B' && street[i+1]!='S' && street[i+2]!='S' && street[i-1]!='S')
            park[i] = true;
        else    park[i] = false;
    }
    int spaces=0;
    for(int i=0;i<street.size();i++){
        if(park[i]==true)       spaces++;
    }
    return spaces;
}
};
// BEGIN CUT HERE
int main()
{
StreetParking ___test;
___test.run_test(-1);
}
// END CUT HERE
