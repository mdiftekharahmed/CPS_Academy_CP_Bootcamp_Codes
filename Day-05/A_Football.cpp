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
    
    string s;cin>>s;
    int n=s.size();
    int one=0, zero=0;
    char c=s[0];
    rep(i,0,n){
        if(one==7 || zero == 7){
            YES;
            return 0;
        }
        if(s[i]=='0'){
            if(c=='0'){
                zero++;
            }
            else{
                zero=1;
                c='0';
            }
        }
        else if(s[i]=='1'){
            if(c=='1'){
                zero++;
            }
            else{
                zero=1;
                c='1';
            }
        }
    }

    if(one==7 || zero == 7){
        YES;
        return 0;
    }
    NO;
    
    return 0;
}