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

class BombSweeper
{
public:
double winPercentage(vector <string> board);
};

double BombSweeper::winPercentage(vector <string> board){
    int rows = board.size(), cols = board[0].size();
    int i,j;
    bool td[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     td[i][j] = true;

    for(i=0;i<cols;i++)
        for(j=1;j<rows;j++){
            if(board[j-1][i]=='B')      td[j-1][i]=false;
            else if(board[j][i]!='.')   td[j-1][i]=false;
        }
    for(i=0;i<cols;i++)
        if(board[rows-1][i]=='B')     td[rows-1][i] = false;

    bool bu[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     bu[i][j] = true;

    for(i=0;i<cols;i++)
        for(j=rows-1;j>0;j--){
            if(board[j][i]=='B')            bu[j][i] = false;
            else if(board[j-1][i]!='.')     bu[j][i] = false;
        }
    for(i=0;i<cols;i++)
        if(board[0][i]=='B')     bu[0][i] = false;

    bool lr[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     lr[i][j] = true;

    for(i=0;i<rows;i++)
        for(j=0;j<cols-1;j++){
            if(board[i][j]=='B')         lr[i][j] = false;
            else if(board[i][j+1]!='.')  lr[i][j] = false;
        }
    for(i=0;i<rows;i++)
        if(board[i][cols-1]=='B')   lr[i][cols-1] = false;

    bool rl[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     rl[i][j] = true;

    for(i=0;i<rows;i++)
        for(j=cols-1;j>0;j--){
            if(board[i][j]=='B')            rl[i][j] = false;
            else if(board[i][j-1]!='.')     rl[i][j] = false;
        }
    for(i=0;i<rows;i++)
        if(board[i][0]=='B')    rl[i][0] = false;

    bool dlu[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     dlu[i][j] = true;
    for(i=1;i<rows;i++)
        for(j=1;j<cols;j++){
            if(board[i][j]=='B')            dlu[i][j] = false;
            else if(board[i-1][j-1]!='.')   dlu[i][j] = false;
        }
    for(i=0;i<rows;i++)
        if(board[i][0]=='B')        dlu[i][0] = false;
    for(i=0;i<cols;i++)
        if(board[0][i]=='B')        dlu[0][i] = false;

    bool dru[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     dru[i][j] = true;

    for(i=1;i<rows;i++)
        for(j=0;j<cols-1;j++){
            if(board[i][j]=='B')            dru[i][j] = false;
            else if(board[i-1][j+1]!='.')   dru[i][j] = false;
        }
    for(i=0;i<rows;i++)
        if(board[i][cols-1]=='B')        dru[i][cols-1] = false;
    for(i=0;i<cols;i++)
        if(board[0][i]=='B')        dru[0][i] = false;

    bool dld[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     dld[i][j] = true;

    for(i=0;i<rows-1;i++)
        for(j=1;j<cols;j++){
            if(board[i][j]=='B')            dld[i][j] = false;
            else if(board[i+1][j-1]!='.')   dld[i][j] = false;
        }
    for(i=0;i<rows;i++)
        if(board[i][0]=='B')        dld[i][0] = false;
    for(i=0;i<cols;i++)
        if(board[rows-1][i]=='B')        dld[rows-1][i] = false;

    bool drd[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)     drd[i][j] = true;

    for(i=0;i<rows-1;i++)
        for(j=0;j<cols-1;j++){
            if(board[i][j]=='B')            drd[i][j] = false;
            else if(board[i+1][j+1]!='.')   drd[i][j] = false;
        }
    for(i=0;i<rows;i++)
        if(board[i][cols-1]=='B')        drd[i][cols-1] = false;
    for(i=0;i<cols;i++)
        if(board[rows-1][i]=='B')        drd[rows-1][i] = false;

    int wins=0,loses=0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(td[i][j] && bu[i][j] && lr[i][j] && rl[i][j] && dlu[i][j] && dru[i][j] && dld[i][j] && drd[i][j])    wins++;
            else if(!td[i][j] && !bu[i][j] && !lr[i][j] && !rl[i][j] && !dlu[i][j] && !dru[i][j] && !dld[i][j] && !drd[i][j])    loses++;
        }
    }
    //cout<<wins<<"  "<<loses<<endl;
    double prob = (double(wins))/(wins+loses);
    return prob*100;
}


// Powered by FileEdit


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor


// Powered by FileEdit
