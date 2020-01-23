#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    
    ll n;
    cin>>n;
    ll arr[n]={0},dp[n]={0};
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    dp[0]=0;
    dp[1]=abs(arr[1]-arr[0]);
    for(int i=2;i<n;i++)
    {
        ll first=abs(arr[i-1]-arr[i])+dp[i-1];
        ll second=abs(arr[i-2]-arr[i])+dp[i-2];
        dp[i]= first<=second ? first:second;
    }
    cout<<dp[n-1]<<endl;
    return 0;
    
}
