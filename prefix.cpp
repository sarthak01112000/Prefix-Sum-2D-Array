#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007
ll mypower(ll a, ll b)
{
    ll ans = 1;
    while(b)
    {
        if(b%2)
            ans = ans*a%mod;
        b=b/2;
        a=a*a%mod;
    }
    return ans;
}
void presum(vector<vector<ll>>&v)
{
    ll n=v.size();
    ll m=v[0].size();
    for(ll i=0;i<n;i++)
    {for(ll j=1;j<m;j++)
    v[i][j]+=v[i][j-1];
    }
    for(ll i=1;i<n;i++)
    {for(ll j=0;j<m;j++)
    v[i][j]+=v[i-1][j];
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    v:
    while(t--)
    {
        ll rows,cols;
        cin>>rows>>cols;
        vector<vector<ll>>v(rows,vector<ll>(cols,0));
        for(ll i=0;i<v.size();i++)
        {for(ll j=0;j<v[i].size();j++)
        cin>>v[i][j];
        }
        presum(v);
        for(ll i=0;i<v.size();i++)
        {for(ll j=0;j<v[i].size();j++)
        cout<<v[i][j]<<" ";
        cout<<"\n";
        }
        
    }

}
