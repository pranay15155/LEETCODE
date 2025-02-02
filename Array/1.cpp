#include <bits/stdc++.h>
#define ub upper_bound
#define lb lower_bound
#define maxe *max_element
#define mine *min_element
#define X INT_MAX
#define Y INT_MIN
#define sp " "
#define cy  cout<<"YES"<<endl
#define cn  cout<<"NO"<<endl
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())))
#define acc(v,r)  accumulate(v.begin(),v.begin()+r,0ll)
li MOD=1e9+7;

#define d(x) cout << #x <<" "; _print(x); cout << endl;
#define d2(x,y) cout << #x<<" "<<#y <<"  ";_print(x);cout<<" ";_print(y); cout << endl;
#define d3(x,y,z) cout << #x<<" "<<#y<<" "<<#z <<"  ";_print(x);cout<<" ";_print(y);cout<<" ";_print(z); cout << endl;
#define d4(a,b,c,d) cout <<#a<<" "<<#b<<" "<<#c<<" "<<#d<<" ";_print(a);cout<<" ";_print(b);cout<<" ";_print(c);cout<<" ";_print(d);cout << endl;
#define d5(a,b,c,d,e) cout <<#a<<" "<<#b<<" "<<#c<<" "<<#d<<" "<<#e<<" ";_print(a);cout<<" ";_print(b);cout<<" ";_print(c);cout<<" ";_print(d);cout<<" ";_print(e);cout << endl;
#define spc()  cout << endl;

void _print(li t) {cerr << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(double t) {cout << t;}
void _print(float t) {cout << t;}

template<class T, class V> void _print(pair <T, V> p);
template<class T> void _print(vector <T> v);
template<class T> void _print(set <T> v);
template<class T, class V> void _print(map <T, V> v);
template<class T> void _print(multiset <T> v);
template<class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template<class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template<class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template<class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template<class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template<class T> void _print(stack<T> s) {vector<T> v; while(s.size()){v.pb(s.top()); s.pop();} _print(v);}
template<class T> void _print(queue<T> q) {vector<T> v; while(q.size()){v.pb(q.front()); q.pop();} _print(v);}
template<class T> void _print(priority_queue<T> q) {vector<T> v; while(q.size()){v.pb(q.top()); q.pop();} _print(v);}
template<class T> void _print(priority_queue<T,vector<T>,greater<T>> q) {vector<T> v; while(q.size()){v.pb(q.top()); q.pop();} _print(v);}
template<class T> void _print(deque<T> q) {vector<T> v; while(q.size()){v.pb(q.front()); q.pop_front();} _print(v);}

class Solution {
};©leetcode