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
    
    int n;
    string s;
    cin>>n>>s;

    int a=0,d=0;
    rep(i,0,n){
        if(s[i]=='A')a++;
        else if(s[i]=='D')d++;
    }
    //cout<<a<<" "<<d<<endl;
    if(a>d)cout<<"Anton"<<endl;
    else if(a<d)cout<<"Danik"<<endl;
    else if(a==d)cout<<"Friendship"<<endl;
    
    return 0;
 }