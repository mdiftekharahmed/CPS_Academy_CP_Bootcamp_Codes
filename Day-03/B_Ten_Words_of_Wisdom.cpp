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
        int n;cin>>n;

    
        int val = 0, valb=0;
        int a,b;
        int i = 0;
        while(i<n){
            cin>>a>>b;
            if(a<=10){
                valb = b;
                val = i;
                i++;
                break;
            }
            else{i++;}
            
        }

        // cout<<"b: "<<valb<<" "<<val<<endl;
        //cout<<"I: "<<i<<endl;

        while(i<n){
            cin>>a>>b;
            if(a<=10 && b>valb){
                //cout<<"b: "<<b<<" "<<val<<endl;
                val = i;
                valb = b;
            }
            i++;
        }

        cout<<val+1<<endl;
    }

    return 0;
}