//O(n)
// not complete
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="";
	int n=s.size(),i=1,l=1,uniq=1,k,start=0,ans=0,cur_start=0,min=INT_MAX;
	cin>>k;
	int v[26]={0};
	v[s[0]]=1;
	while(i<n)
	{
		if(v[s[i]]==0)
		{
			uniq++;
			v[s[i]]=1;
		}
		else
		{
			v[s[i]]++;
		}
		if(min<v[s[i]])
			{
				min=v[s[i]];
				cur_start=i;
			}
		l++;
		ans=max(ans,l);
		if(uniq==k)
		{
			start=cur_start+1;
			l=i-start+1;
			uniq--;
		}

	}
}