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
	    int n;
	    cin>>n;
	    int total=n*(n+1)/2;
	    
	    for(int i=0;i<n-1;i++)
	    {
	        int x;
	        cin>>x;
	        total-=x;
	    }
	    cout<<total<<endl;
	    
	}
	return 0;
}