#include<bits/stdc++.h>
using namespace std;

int n,cont=0;

void print(int a[4][4])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;		
	}
	cout<<"-----------------"<<endl;
}

int safe(int i,int j,int a[4][4])
{
	return i>=0 && j>=0 && i<n && j<n && a[i][j]==0;
}

void foo(int i,int j,int a[4][4])
{
	if(i==n-1 && j==n-1)
	{
		cont++;
		a[i][j]=2;
		print(a);
		a[i][j]=0;
		return;
	}
	a[i][j]=2;
	if(safe(i+1,j,a))
		foo(i+1,j,a);
	if(safe(i,j+1,a))
		foo(i,j+1,a);

	a[i][j]=0;
}

int main()
{
	int i,j;
	n=4;
	// cin>>n;
	// for(i=0;i<n;i++)
	// 	for(j=0;j<n;j++)
	// 		cin>>a[i][j];
	int a[4][4]={{0,  0, 0, 0},
          {0, -1, 0, 0},
          {-1, 0, 0, 0},
          {0,  0, 0, 0}};
    foo(0,0,a);
    cout<<"No. of paths are "<<cont<<endl;
}
