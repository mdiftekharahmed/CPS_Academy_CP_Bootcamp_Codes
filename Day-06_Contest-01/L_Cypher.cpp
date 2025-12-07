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
        vi arr(n);
        rep(i,0,n)cin>>arr[i];

        rep(i,0,n){
            int sz;cin>>sz;
            string st;cin>>st;
            int uc=0,dc=0;
            rep(i,0,sz){
                if(st[i]=='U')uc++;
                else dc++;
            }
            // cout<<"uc: "<<uc<<" dc: "<<dc<<endl;
            if(dc==uc){
                continue;
            }
            else if(dc>uc){
                int val=dc-uc;
                val%=10;
                // cout<<"change: "<<val<<endl;
                // cout<<"b: "<<arr[i]<<" after: ";
                if(arr[i]+val>9){
                    arr[i] = arr[i]+val -10;
                }
                else{

                    arr[i]+=val;
                }
                // cout<<arr[i]<<endl;
            }

            else if(dc<uc){
                int val=uc-dc;
                val%=10;
                // cout<<"change: "<<val<<endl;
                // cout<<"b: "<<arr[i]<<" after: ";
                if(arr[i]-val<0){
                    arr[i] = 10 + (arr[i]-val);
                }
                else{

                    arr[i]-=val;
                }
                // cout<<arr[i]<<endl;
            }

        }
        rep(i,0,n){
            cout<<arr[i];
            if(i!=n-1)cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}