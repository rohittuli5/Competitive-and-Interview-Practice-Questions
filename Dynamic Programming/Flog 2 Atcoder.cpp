#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    
    ll n,k;
    cin>>n>>k;
    ll arr[n]={0},dp[n]={0};
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    dp[0]=0;
    dp[1]=abs(arr[1]-arr[0]);
    for(ll i=2;i<n;i++)
    {
        ll myArr[k];
        for(ll j=0;j<min(i,k);j++)
        {
            myArr[j]=abs(arr[i-j-1]-arr[i])+dp[i-j-1];
            
        }
    
        dp[i]=*min_element(myArr,myArr+min(i,k));

    }
   
    cout<<dp[n-1]<<endl;
    return 0;
    
}
