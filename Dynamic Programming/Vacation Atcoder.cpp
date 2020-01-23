#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int swim[n],bugs[n],homework[n];
    for (int i = 0; i < n; i++)
    {
        cin>>swim[i]>>bugs[i]>>homework[i];
    }
    int happiness[n][3];
    happiness[0][0]=swim[0];
    happiness[0][1]=bugs[0];
     happiness[0][2]=homework[0];
    for (int i = 1; i < n; i++)
    {
        happiness[i][0]= swim[i]+ max(happiness[i-1][1],happiness[i-1][2]);
        happiness[i][0]= bugs[i]+ max(happiness[i-1][0],happiness[i-1][2]);
        happiness[i][2]= homework[i]+ max(happiness[i-1][1],happiness[i-1][0]); 
    }
    cout<<max(max(happiness[n-1][0],happiness[n-1][1]),happiness[n-1][2])<<endl;
    
    
}