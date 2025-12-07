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
    
    int n;cin>>n;
    vi arr(n);
    int evid,odid,ev=0, od=0;
    rep(i,0,n){
        cin>>arr[i];
        if(arr[i]%2==0){
            ev++;evid=i;
        }
        else{
            od++;
            odid=i;
        }
    }
    if(ev==1)cout<<evid+1<<endl;
    else cout<<odid+1<<endl;
    
    return 0;
}