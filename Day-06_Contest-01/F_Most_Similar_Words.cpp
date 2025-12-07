#include<bits/stdc++.h>
using namespace std;

#define fastio std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define ll long long

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define endl '\n'
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define repd(i, a, b, d) for(int i = (a); i < (b); i += d)
#define rrep(i, a, b) for(int i = (a); i >= (b); --i)
#define spc << ' ' <<

#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"

int main(){
    fastio
    
    int _;
    cin >> _;
    while(_--){
        int cost = 0;
        int n,m;cin>>n>>m;
        vector<string> arr(n);
        rep(i,0,n)cin>>arr[i];
        int mn=INT_MAX;
        rep(i,0,n-1){
            rep(j,(i),n){
                cost = 0;
                if( i!=j){
                    rep(k,0,m){
                        if(arr[i][k]!=arr[j][k]){
                            //cout<<arr[i][k]<<" "<<arr[j][k]<<" const: "<<(max(arr[i][k], arr[j][k]) - min(arr[i][k],arr[j][k]))<<endl;
                            cost+= (max(arr[i][k], arr[j][k]) - min(arr[i][k],arr[j][k]));
                        }
                    }
                    //cout<<i<<" i:j "<<j<<" cost: "<<cost<<endl;
                    mn = min(mn, cost);
                }
            }
            //cout<<"Cost: "<<cost<<endl;
        }
        cout<<mn<<endl;
        
    }

    return 0;
}