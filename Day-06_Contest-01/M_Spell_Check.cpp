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

// int func(){
//     int n;cin>>n;
//         if(n!=5){
//             NO;
//             return 0;
//         }
//         //cout<<n<<endl;
//         vector<char> s={'T', 'i','m','u','r'};
//         sort(s.begin(), s.end());
//         vector<char> t(5);
//         string st;cin>>st;
//         rep(i,0,n){
//             t[i]=st[i];
//         }
//         sort(t.begin(), t.end());
//         rep(i,0,n){
//             //cout<<s[i]<<" "<<t[i]<<endl;
//             if(s[i]!=t[i]){
//                 NO;
//                 return 0;
//             }
//         }
//         YES;
//         return 0;
// }




int main(){
    fastio
    string t="Timur";
    sort(t.begin(), t.end());

    int _;
    cin >> _;
    while(_--){
        
        int n;cin>>n;
        // if(n!=5){
        //     NO;
        //     continue;
        // }
        string s;cin>>s;
        sort(s.begin(), s.end());
        if(s==t)YES;
        else NO;
        
    

    }

    return 0;
}