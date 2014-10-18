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

class Cards
{
public:
    vector <string> deal(int numPlayers, string deck){
        vector <string> r(numPlayers); int n = (deck.length()/numPlayers)*numPlayers;
        //cout<<n<<endl;
        for(int i=0;i<numPlayers;i++) {
            string s = "";
            for(int j=i;j<n;j+=numPlayers){
                s = s + deck[j];
            }
            r[i] = s;
        }
        return r;
    }
};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
