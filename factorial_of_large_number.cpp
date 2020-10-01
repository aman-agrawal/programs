// python
// import math
// math.factorial(100)

#include <bits/stdc++.h> 
using namespace std; 
vector<int>ans;

void foo(int x)
{
	int n=ans.size();
	int res,i=0,carry=0;

	while(i<n)
	{
		res=ans[i]*x+carry;
		ans[i]=res%10;
		carry=res/10;
		i++;
	}
	while(carry)
	{
		ans.push_back(carry%10);
		carry/=10;
	}
}
int main() 
{ 
	int n;
	cin>>n;

	ans.push_back(1);
	int i;
	for(i=2;i<=n;i++)
		foo(i);
	reverse(ans.begin(),ans.end());
	for(i=0;i<ans.size();i++)
		cout<<ans[i];
	return 0; 
} 
