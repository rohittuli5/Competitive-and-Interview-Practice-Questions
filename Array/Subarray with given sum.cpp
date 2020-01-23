#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
using namespace std;
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,sum;
	    cin>>n>>sum;
	    ll arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    bool flag=false;
	    
	    ll currSum=0;
	     ll left=0;
	     ll right=0;
	    for(int i=0;i<n;i++)
	    {
	       
	        
	        if(currSum<sum)
	        {
	            
	            currSum+=arr[i];
	        }
	        while(currSum>sum)
	        {
	            currSum-=arr[left];
	            left++;
	        }
	        if(currSum==sum)
	        {
	            flag=true;
	            cout<<left+1<<" "<<i+1<<endl;
	            break;
	        }
	    }
	    if(flag==false)
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}