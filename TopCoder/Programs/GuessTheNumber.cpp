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

class GuessTheNumber
{
public:
int noGuesses(int upper, int answer) {
    int lower=1,guess=0,temp;
    while(lower<=upper){
        temp = (lower+upper)/2;
        guess++;
        if(temp==answer)        return guess;
        else if(temp<answer)    lower = temp+1;
        else                    upper = temp-1;
    }
    return guess;
}
};


// Powered by FileEdit
