//O(nlogn)
#include<bits/stdc++.h>
using namespace std;

int a[5]={1, 20, 6, 4, 5 };
int n=sizeof(a)/sizeof(a[0]);
int temp[5];

int merge(int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    int inv=0;
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
        {
            inv+=mid-i+1;
            temp[k++]=a[j++];
        }
    }

    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=high)
        temp[k++]=a[j++];

    for(i=low;i<=high;i++)
        a[i]=temp[i];

    return inv;
}

int divide(int i,int j)
{
    int inv=0,mid=(i+j)/2;;
    if(i<j)
    {
        inv+=divide(i,mid);
        inv+=divide(mid+1,j);
        inv+=merge(i,mid,j);
    }
    return inv;
}
int main()
{
   cout<<"No. of inversions using Divide and conquer are : "<<divide(0,n-1)<<endl;
}
