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
	    ll n;
	    cin>>n;
	    vector<int> arr;
	    arr.clear();
	    for(int i=0;i<n;i++)
	    {
	        ll inp;
	        cin>>inp;
	        arr.push_back(inp);
	    }
	    sort(arr.begin(),arr.end());
	   // for(int i=0;i<n;i++)
	   // {
	   //     cout<<arr[i];
	   // }
	    ll res=0;
	    for(int i=n-1; i>1; i--)
	    {
	        ll a=0,b=i-1;
	        while(b>a){
    	        if(arr[a]+arr[b]==arr[i])
    	        {
    	            res++;
    	            a++;
    	            b--;
    	        }
    	        else if(arr[a]+arr[b]<arr[i])
    	        {
    	            a++;
    	        }
    	        else b--;
	        }
	    }
	    if(res==0)
	    cout<<-1<<endl;
	    else cout<<res<<endl;
	}
	return 0;
}