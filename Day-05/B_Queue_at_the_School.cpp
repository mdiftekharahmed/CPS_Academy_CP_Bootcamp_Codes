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
    
    int n,t;cin>>n>>t;
    string s;cin>>s;
    rep(i,0,t){
        rep(j,0,n-1){
            if(s[j]=='B' && s[j+1]=='G'){
                //cout<<"Found at: "<<j<<" "<<j+1<<endl;
                char temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
        }
    }
    cout<<s<<endl;
    
    return 0;
}