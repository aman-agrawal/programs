class Solution {
public:
    vector<vector<int>>a{{1,1},{1,0}};
    
    vector<vector<int>> mul(vector<vector<int>>p,vector<vector<int>>q)
    {
        vector<vector<int>>r(2,vector<int>(2));
        
        r[0][0]=p[0][0]*q[0][0] + p[0][1]*q[1][0];
        r[0][1]=p[0][0]*q[0][1] + p[0][1]*q[1][1];
        r[1][0]=p[1][0]*q[0][0] + p[1][1]*q[1][0];
        r[1][1]=p[1][0]*q[0][1] + p[1][1]*q[1][1];
        
        return r;
    }
    
    vector<vector<int>> foo(int n)
    {
        if(n==1)
            return a;
        
        vector<vector<int>>temp(2,vector<int>(2));
        
        temp=foo(n/2);
        
        temp=mul(temp,temp);
        
        if(n%2==1)
            temp=mul(temp,a);
        
        return temp;
    }
    
    int fib(int N) {
        if(N==0)
            return 0;
        if(N<3)
            return 1;
        
        vector<vector<int>>ans(2,vector<int>(2)) ;
        N--;
        ans= foo(N);
        
        return ans[0][0];
            
    }
};