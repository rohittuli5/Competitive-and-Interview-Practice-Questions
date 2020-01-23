#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
using namespace std;
int solve(int n, ll dp[])
{
    if(n==0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int choice1,choice2;
    choice1=choice2=INT_MAX;
    if(n%2==0 && n>1)
    {
        choice1=solve(n/2,dp)+1;
        
    }
    if(n>0)
    {
        choice2=solve(n-1,dp)+1;
    }
    return dp[n]=min(choice1,choice2);
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll dp[n+1];
	    for(int i=0;i<=n;i++)
	    {
	        dp[i]=-1;
	    }
	    
	    cout<<solve(n,dp)<<endl;
	}
	return 0;
}