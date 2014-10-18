#include <vector>
#include <list>
#include <map>
#include <set>
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

using namespace std;

class DiskSpace {
public:
	int minDrives(vector <int>, vector <int>);
};

int DiskSpace::minDrives(vector <int> used, vector <int> total) {
    sort(total.begin(),total.end(),greater<int>());
    int sum=0;
    for(unsigned int i=0;i<used.size();i++){
        sum += used[i];
    }
    for(unsigned int i=0;i<used.size();i++){
        if(total[i] >= sum){
            return i+1;
        }
        sum -= total[i];
    }
    return -1;
}


//Powered by [KawigiEdit] 2.0!


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor


// Powered by FileEdit


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
