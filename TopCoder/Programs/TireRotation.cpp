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

class TireRotation {
public:
	int getCycle(string, string);
};

int TireRotation::getCycle(string initial, string current) {
	int i=0;
    while(current[i]){
        int pos = initial.find(current[i]);
        if(pos==0)      current[i] = 'A';
        if(pos==1)      current[i] = 'B';
        if(pos==2)      current[i] = 'C';
        if(pos==3)      current[i] = 'D';
        i++;
    }
    int phase=-1;
    if(current[0]=='A' && current[1]=='B' && current[2]=='C' && current[3]=='D')    phase=1;
    else if(current[0]=='D' && current[1]=='C' && current[2]=='A' && current[3]=='B')    phase=2;
    else if(current[0]=='B' && current[1]=='A' && current[2]=='D' && current[3]=='C')    phase=3;
    else if(current[0]=='C' && current[1]=='D' && current[2]=='B' && current[3]=='A')    phase=4;
	
    return phase;

}


//Powered by [KawigiEdit] 2.0!
