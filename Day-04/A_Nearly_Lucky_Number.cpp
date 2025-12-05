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


int func(ll n){
    set<long long> arr;
    while(n>0){
        // cout<<n<<endl;
        ll p = n%10;
        arr.insert(p);
        n/=10;
    }
    if(n==4)return 1;
    else if(n==7)return 1;
    if(arr.size()>2)return 0;
    for(auto x:arr){
        if(!(x==4 || x==7)){
            return 0;
        }
    }
    return 1;
}

int main(){
    fastio

    int count = 0;

    ll n;cin>>n;
    set<long long> arr;
    while(n>0){
        // cout<<n<<endl;
        ll p = n%10;
        if(p==4 || p==7)count++;
        n/=10;
    }
    

    if(count<4){
        NO;
        return 0;
    }

    int b= func(count);
    //cout<<b<<endl;
    if(b)YES;
    else NO; 
    
    return 0;
}