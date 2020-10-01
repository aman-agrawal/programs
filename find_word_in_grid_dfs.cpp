// Given a 2D board of characters and a word, find if the word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

// For example, given the following board:

// [
//   ['A','B','C','E'],
//   ['S','F','C','S'],
//   ['A','D','E','E']
// ]
// exists(board, "ABCCED") returns true, exists(board, "SEE") returns true, exists(board, "ABCB") returns false.

#include<bits/stdc++.h>
using namespace std;

string s="ABCB";
vector<vector<char>>v;
int r,c;
int vis[100][100]={0};

int foo(int i,int j,int k)
{
    if(k>=s.size())
        return 1;
    vis[i][j]=1;
    int d1[4]={0,0,1,-1};
    int d2[4]={1,-1,0,0};
    for(int x=0;x<4;x++)
    {
        int p=i+d1[x],q=j+d2[x];
        if(p>=0 && q>=0 && p<r && q<c && v[p][q]==s[k] && vis[p][q]==0)
        {
            if(foo(p,q,k+1))
                return 1;
            vis[p][q]=0;
        }
    }
    vis[i][j]=0;
    return 0;
}

int main()
{
    
    int i,j;
    v.push_back({'A','B','C','E'});
    v.push_back({'S','F','C','S'});
    v.push_back({'A','D','E','E'});
    r=v.size(),c=v[0].size();
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(v[i][j]==s[0] && foo(i,j,1))
            {
                cout<<"true";
                return 0;
            }
        }
    }
    cout<<"false";
    return 0;
}