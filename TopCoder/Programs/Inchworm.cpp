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

class Inchworm
{
public:
int lunchtime(int branch, int rest, int leaf){
    int eat=1;
    for(int i=leaf;i<=branch;i+=leaf){
        for(int j=rest;j<=branch && j<=i;j+=rest){
            if(j==i)    eat++;
        }
    }
    return eat;
}
};


// Powered by FileEdit
