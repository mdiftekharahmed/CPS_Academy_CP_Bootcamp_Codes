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
        set<int> s;
        map<int, int> m;
        vi arr(n);
        int ans;
        int mx=0;
        rep(i,0,n){
            cin>>arr[i];
            //cout<<"inp: "<<arr[i]<<endl;
            if(s.count(arr[i])){
                
                m[arr[i]]++;
                mx= max(mx, m[arr[i]]);
               // cout<<arr[i]<<"-"<<m[arr[i]]<<endl;
                if(m[arr[i]]>=3){
                    cout<<arr[i]<<endl;
                    int p;
                    rep(j,i+1,n)cin>>p;
                    return 0;
                }
            }
            else{
                s.insert(arr[i]);
                m[arr[i]]=1;

            }
        }
        cout<<-1<<endl;
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