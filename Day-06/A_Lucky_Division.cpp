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


int alsmot_lucky(int n){
    while(n>0){
        if(!(n%10==4 || n%10==7)){
            return 0;
        }
        n/=10;
    }
    return 1;
}

int main(){
    fastio
    
    int n;cin>>n;
    if(alsmot_lucky(n)){
        YES;
        return 0;
    }
    for(int i=2;i*2<n;i++){
        if(n%i==0 && alsmot_lucky(n/i)){
            YES;
            return 0;
        }
    }
    NO;
    
    return 0;
}