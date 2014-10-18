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

class CardCount
{
public:
vector <string> dealHands(int numPlayers, string deck)
{
    vector <string> r(numPlayers);
    int n = (deck.length()/numPlayers)*numPlayers;
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
