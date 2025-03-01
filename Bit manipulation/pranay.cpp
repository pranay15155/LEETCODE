
//HAR HAR MAHADEV

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define acc(v,r)  accumulate(v.begin(),v.begin()+r,0ll)  

int temporary;
int queries=1;


// Debugging Template
#ifndef ONLINE_JUDGE
#define dqy(x) cerr << endl << "#" << " " << x << "------>"; cerr << endl;
#define d(x) cerr << #x <<" "; _print(x); cerr << endl;
#define d2(x, y) cerr << #x<<" "<<#y <<"  "; _print(x); cerr << " "; _print(y); cerr << endl;
#define d3(x, y, z) cerr << #x<<" "<<#y<<" "<<#z <<"  "; _print(x); cerr << " "; _print(y); cerr << " "; _print(z); cerr << endl;
#define d4(a, b, c, d) cerr << #a<<" "<<#b<<" "<<#c <<" "<<#d<<" "; _print(a); cerr << " "; _print(b); cerr << " "; _print(c); cerr << " "; _print(d); cerr << endl;
#define spc() cerr << endl;
#else
#define d(x)
#define d2(x, y)
#define d3(x, y, z)
#define d4(a, b, c, d)
#define dqy(x)
#define spc()
#endif

void _print(long long t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(float t) { cerr << t; }

template<class T, class V> void _print(pair<T, V> p);
template<class T> void _print(vector<T> v);
template<class T> void _print(set<T> v);
template<class T, class V> void _print(map<T, V> v);
template<class T> void _print(multiset<T> v);
template<class T> void _print(stack<T> s);
template<class T> void _print(queue<T> q);
template<class T> void _print(priority_queue<T> q);
template<class T> void _print(priority_queue<T, vector<T>, greater<T>> q);
template<class T> void _print(deque<T> q);
template<class T> void _print(unordered_set<T> v);
template<class T, class V> void _print(unordered_map<T, V> v);

template<class T, class V> void _print(pair<T, V> p) {
    cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";
}

template<class T> void _print(vector<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}

template<class T> void _print(set<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}

template<class T> void _print(multiset<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}

template<class T, class V> void _print(map<T, V> v) {
    cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]";
}

template<class T> void _print(stack<T> s) {
    vector<T> v;
    while (s.size()) { v.push_back(s.top()); s.pop(); }
    _print(v);
}

template<class T> void _print(queue<T> q) {
    vector<T> v;
    while (q.size()) { v.push_back(q.front()); q.pop(); }
    _print(v);
}

template<class T> void _print(priority_queue<T> q) {
    vector<T> v;
    while (q.size()) { v.push_back(q.top()); q.pop(); }
    _print(v);
}

template<class T> void _print(priority_queue<T, vector<T>, greater<T>> q) {
    vector<T> v;
    while (q.size()) { v.push_back(q.top()); q.pop(); }
    _print(v);
}

template<class T> void _print(deque<T> q) {
    vector<T> v;
    while (q.size()) { v.push_back(q.front()); q.pop_front(); }
    _print(v);
}


template<class T> void _print(unordered_set<T> v) {
    cerr << "{ ";
    for (T i : v) { _print(i); cerr << " "; }
    cerr << "}";
}


template<class T, class V> void _print(unordered_map<T, V> v) {
    cerr << "{ ";
    for (auto i : v) { _print(i); cerr << " "; }
    cerr << "}";
}


istream& operator>>(istream& in, vector<ll>& v) {
  for (auto &x : v) in >> x;
    return in;
}



ll made_ceil(ll dividend, ll divisor) {
  if (dividend % divisor == 0) {
    return (dividend / divisor);
  } else {
    return (dividend / divisor) + 1;
  }
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
  if (a.first != b.first) {
        return a.first < b.first;  
    }
    return a.second > b.second;  
}

string number_to_binary(ll n) {
  string ans = "";
  while (n) {
    if (n & 1) {
            ans += '1';  
        } else {
            ans += '0';  
        }
        n = n >> 1;  
    }
    reverse(ans.begin(), ans.end()); 
    return ans;
}

ll binary_to_number(string s) {
    reverse(s.begin(), s.end());  
    ll ans = 0;
    for (ll i = 0; i < s.size(); ++i) {
      if (s[i] == '1') {
            ans += (1LL << i);  
        }
    }
    return ans;
}



void pranay_prasoon(){
int Q=temporary-queries;dqy(Q);


 ll n;
 cin>>n;

 vector<ll>temp={1,8,49,288,1681};

 // d(temp)
 // for (int i = 1; i <500001 ; ++i)
 // {
 // 	ll t=(i*(i+1))/2;
 // 	d(t)
 // 	ll k=sqrt(t);
 // 	d3(i,t,k)
 // 	if(k*k==t)cout<<i<<" "<<-1<<endl;
 // }
 unordered_map<ll,ll>mp;
 for(auto &x:temp)mp[x]++;


 
vector<ll>v;
for (int i = 1; i <= n; ++i)
{
	v.push_back(i);
}
for (int i = 0; i < n-1; ++i)
{
	if (mp.find(v[i])!=mp.end())
	{
		ll temp=v[i];
		v[i]=v[i+1];
		v[i+1]=temp;
		i++;
	}
}
for (int i = 0; i < n; ++i)
{
	cout<<v[i]<<" ";
}cout<<endl;








 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("output1.txt", "w", stderr);
#endif // ONLINE_JUDGE

    cin >> queries;
    temporary=queries;
    while (queries--)
    {
        pranay_prasoon();
    }
    return 0;
}


