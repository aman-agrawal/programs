#include <bits/stdc++.h> 
using namespace std; 
#define R 3 
#define C 6 
  
void foo(int re, int ce, int a[R][C]) 
{ 
    int i, rs = 0, cs = 0; 
  
    while (rs < re && cs < ce) 
    { 
        for (i = cs; i < ce; ++i) 
        { 
            cout << a[rs][i] << " "; 
        } 
        rs++; 

        for (i = rs; i < re; ++i) 
        { 
            cout << a[i][ce - 1] << " "; 
        } 
        ce--; 

        if (rs < re) 
        { 
            for (i = ce - 1; i >= cs; --i)
            { 
                cout << a[re - 1][i] << " "; 
            } 
            re--; 
        } 

        if (cs < ce) 
        { 
            for (i = re - 1; i >= rs; --i) 
            { 
                cout << a[i][cs] << " "; 
            } 
            cs++; 
        } 
    } 
} 

int main() 
{ 
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
  
    foo(R, C, a); 
    return 0; 
} 
