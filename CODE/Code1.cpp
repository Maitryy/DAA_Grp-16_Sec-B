#include<bits/stdc++.h>
using namespace std;
int binsearch(int a[],int b[],int n)
{
    int start=0,end=n-1;
    int mid,res;
    while(start<=end)
    {
        mid= start+((end-start)/2);
        if(a[mid]==b[mid])
        {
            start=mid+1;
        }
        else if(a[mid]!=b[mid])
        {
        	res=mid;
        	end=mid-1;
        }
    }
     return b[res]; 
}

int main() 
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n<=2)
	{
		cout<<"No element is missing"<<endl;
	}
	else
	{
	b[0]=a[0];
	int d=(a[n-1]-a[0])/n;
	for(int i=1;i<n;i++)
	{
		b[i]=b[i-1]+d;
	}
	int ans=binsearch(a,b,n);
	cout<<"The missing number is: "<<ans<<endl;
	}
	return 0;
}