// O(n3) solution
// n2 using DP or using Centre_for_expansion
// n using Manacher Algo

//O(n3)
// #include<bits/stdc++.h>
// using namespace std;

// int check(string s)
// {
//     int i,n=s.size();
//     for(i=0;i<n/2;i++)
//     {
//         if(s[i]!=s[n-1-i])
//             return 0;
//     }
//     return n;
// }

// int main()
//  {
//     string s="forgeeksskeegfor",temp_string="",ans_string="";
//     int i,j,k,n,ans=1,temp;
//     n=s.size();
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             temp_string=s.substr(i,j-i+1);
//             temp=check(temp_string);
//             if(temp>ans)
//             {
//                 ans=temp;
//                 ans_string=temp_string;
//             }
//         }
//     }
//     cout<<ans<<endl<<ans_string<<endl;
// }

//O(n2) using centre of expansion
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="forgeeksskeegfor";
    int n=s.size(),i,low,high,ans=0,index=0;

    for(i=1;i<n;i++)
    {
        // for odd length sub_strings
        low=i-1,high=i+1;
        while(low>=0 && high<n && s[low]==s[high])
        {
            if(ans<high-low+1)
            {
                ans=high-low+1;
                index=low;
            }
        }

        // for even length sub_strings
        low=i-1,high=i;
        while(low>=0 && high<n && s[low]==s[high])
        {
            if(ans<high-low+1)
            {
                ans=high-low+1;
                index=low;
            }
        }
    }
    cout<<"length = "<<ans<<endl;
    cout<<s.substr(index,ans)<<endl;
}
