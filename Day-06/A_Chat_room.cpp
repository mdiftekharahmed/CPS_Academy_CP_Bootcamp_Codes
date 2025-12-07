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
    map<char, int> arr;
    arr['h']=0;
    arr['e']=0;
    arr['l']=0;
    arr['o']=0;
    char p='h';
    int i =0;
    while(i<s.size()){
        if(s[i]=='h'){
            //cout<<"h in : "<<i<<endl;
            arr['h']++;
            // i++;
            break;
        }
        i++;
    }
    while(i<s.size()){
        if(s[i]=='e'){
            //cout<<"e in : "<<i<<endl;
            arr['e']++;
            // i++;
            break;
        }
        i++;
    }
    while(i<s.size()){
        //if(s[i]=='l')cout<<"l in : "<<i<<endl;
        if(s[i]=='l'){
            arr['l']++;
            // i++;
            if(arr['l']>=2){
                // i++;
                break;}
        }
        i++;
    }
    while(i<s.size()){
        if(s[i]=='o'){
            //cout<<"o in : "<<i<<endl;
            arr['o']++;
            // i++;
            break;
        }
        i++;
    }

    if(
    arr['h']>0 &&
    arr['e']>0 &&
    arr['l']>1 &&
    arr['o']>0 ){
        YES;
    }
    else NO;

    return 0;
}