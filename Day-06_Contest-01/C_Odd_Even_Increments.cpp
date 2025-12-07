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
        int allsame=1;
        rep(i,0,n){
            cin>>arr[i];
            if(i>0 && arr[i]!=arr[0])allsame=0;
        }
        if(allsame){
            YES;
            return 0;
        }

        int z= arr[0]%2;
        int o = arr[1]%2;
        // cout<<z<<" z:O "<<o<<endl;
        rep(i,2,n){
            if(i%2){
                if(arr[i]%2!=o){
                    //cout<<"OD: "<<i<<" "<<o<<endl;
                    NO;
                    return 0;
                }
            }
            else{
                if(arr[i]%2!=z){
                    //cout<<"EV: "<<i<<" "<<arr[i]<<" : "<<z<<endl;
                    NO;
                    return 0;
                }
            }
        }
        YES;
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