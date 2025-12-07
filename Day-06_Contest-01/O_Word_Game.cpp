// #include<bits/stdc++.h>
// using namespace std;

// #define fastio std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
// #define ll long long

// // #define pb push_back
// #define eb emplace_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define pii pair<int, int>
// #define vi vector<int>
// #define vll vector<ll>
// #define vpi vector<pii>
// #define endl '\n'
// #define rep(i, a, b) for(int i = (a); i < (b); ++i)
// #define repd(i, a, b, d) for(int i = (a); i < (b); i += d)
// #define rrep(i, a, b) for(int i = (a); i >= (b); --i)
// #define spc << ' ' <<

// #define YES cout << "YES\n"
// #define Yes cout << "Yes\n"
// #define NO cout << "NO\n"
// #define No cout << "No\n"

// int main(){
//     fastio

//     int _;
//     cin >> _;
//     while(_--){
//         int n;cin>>n;
//         set<string> a,b,c;
//         int pa=0,pb=0,pc=0;
//         rep(i,0,n){
//             string v;cin>>v;
//             a.insert(v);
//         }
//         rep(i,0,n){
//             string v;cin>>v;
//             b.insert(v);
//         }rep(i,0,n){
//             string v;cin>>v;
//             c.insert(v);
//         }
        
//         for(auto x: a){
//             if(b.count(x)&& c.count(x)){
//                 a.erase(x);
//                 b.erase(x);
//                 c.erase(x);
//             }
//             else if(c.count(x) && !b.count(x)){
//                 pa++;
//                 pc++;
//                 a.erase(x);
//                 c.erase(x);
//             }
//             else if(!c.count(x) && b.count(x)){
//                 pa++;
//                 pb++;
//                 a.erase(x);
//                 b.erase(x);
//             }
//             else{
//                 pa+=3;
//             }

//         }

//         for(auto x:b){
//             if(c.count(x)){
//                 pb++;
//                 pc++;
//                 b.erase(x);
//                 c.erase(x);
//             }
//             else{
//                 pb+=3;
//             }

//         }
//         for(auto x:c){

//                 pc+=3;

//         }

//         cout<<pa<<" "<<pb<<" "<<pc<<endl;

//     }

//     return 0;
// }


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
        map<string, set<int>> arr;

        rep(i,0,3){
            rep(j,0,n){
                string s;cin>>s;
                arr[s].insert(i);
            }
        }
        vi sc(3,0);
        //cout<<"size: "<<arr.size()<<endl;
        for(auto &x: arr){
            // cout << x.first << " ";
            if(x.second.size()==1){
                sc[*x.second.begin()]+=3;
            }
            else if(x.second.size()==2){
                sc[*x.second.begin()]++;
                x.second.erase(*x.second.begin());
                sc[*x.second.begin()]++;
            }

            // for(int idx : x.second){ 
            //     cout << idx << ' ';

            // }
            // cout << endl;
        }

        cout<<sc[0]<<" "<<sc[1]<<" "<<sc[2]<<endl;

    }

    return 0;
}