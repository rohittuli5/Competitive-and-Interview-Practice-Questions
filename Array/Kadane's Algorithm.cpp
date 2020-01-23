#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<int> arr(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	   // for(int i=0;i<n;i++)
	   // {
	   //     cout<<arr[i];
	   // }
	    //cout<<endl;
	    ll dp[n]={0};
	    ll max=-100000000;
	    dp[0]=arr[0];
	    
	    if(max<dp[0])
	        max=dp[0];
	        
	    for(int i=1;i<n;i++){
	        if(dp[i-1]>0)
	        dp[i]=dp[i-1]+arr[i];
	        else dp[i]=arr[i];
	        if(dp[i]>max)
	        {
	            max=dp[i];
	        }
	        
	    }
	    cout<<max<<endl;
	}
	return 0;
}