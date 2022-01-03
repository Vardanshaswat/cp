#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int a[100][100];



void solve()
{
    int n,k;
    cin>>n>>k;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            a[i][j]=n;
        }
    }
    
    
    int x = 0;
    for(int i = 0; i<n; i+=2)
    {
        if(x==k)break;
        a[i][i]=1;
        x++;
    }
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(a[i][j]==1)cout<<"R";
            else  cout<<".";
            
        }
        cout<<endl;
    }
}

int main()
{
    
  int t;
  cin>>t;
  while(t--)
  {
      solve();
  }
}