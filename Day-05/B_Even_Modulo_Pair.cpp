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

int func(){
    int n;cin>>n;
    vi arr(n);
    rep(i,0,n)cin>>arr[i];

    rep(i,0,n){
        rep(j,0,n){
            if(i!=j){
                int x=min(arr[i], arr[j]);
                int y = max(arr[i], arr[j]);
                
                if((y%x)%2==0){
                    cout<<x<<" "<<y<<endl;
                    return 0;
                }
                
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;

}


int main(){
    fastio

    int _;
    cin >> _;
    while(_--){
        
        func();



    }


    return 0;
}