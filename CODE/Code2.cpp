#include <bits/stdc++.h>
using namespace std;
int ans INT_MIN;

void missingTerm(int a[], int l, int h, int d)
{
  if(l>=h)
  return;
  int m=(l+h)/2;
  int curr = a[0]+m*d;
  if(a[m]-a[m-1]!=d && m+1<h)
     ans=a[m-1]+d;
  else if(a[m+1]-a[m]!=d && m+1<h)
     ans=a[m]+d;
  else if(a[m]==curr)
     missingTerm(a,m+1,h,d);
  else
     missingTerm(a,l,m-1,d);
  return;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++)
  cin>>a[i];
  if(n<3)
  cout<<"Invalid Input"<<endl;
  else
  {
    int d;
    if(a[2]-a[1]==a[1]-a[0])
    d=a[1]-a[0];
    else if(a[3]-a[2]==a[2]-a[1])
    d=a[2]-a[1];
    else
    d=a[1]-a[0];
    missingTerm(a,0,n-1,d);
    if(ans > INT_MIN)
    cout<<ans<<endl;
    else
    cout<<"No missing term"<<endl;
  }
  return 0;
}
