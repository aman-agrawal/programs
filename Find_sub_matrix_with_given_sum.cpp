//O(n4)
//in n*n matrix check sum=s for k*k matrix inside
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[4][4]={{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}, {13, 14, 15, 16}};
	int n=4,k=2,s=14,i,j,sum=0,p,q;

	for(p=0;p<n-k;p++)
	{
		for(q=0;q<n-k;q++)
		{
			sum=0;
			for(i=p;i<p+k;i++)
			{
				for(j=q;j<q+k;j++)
				{
					sum+=a[i][j];
				}
			}
			if(sum==s)
			{
				cout<<"yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"false"<<endl;
	return 0;
}