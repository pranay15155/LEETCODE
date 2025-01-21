
//HAR HAR MAHADEV

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define li long long int
#define uli unsigned long long int
#define ppb pop_back
#define ct cout 
#define el "\n"
#define sz(s) (long long int)(s.size())
#define ff first
#define ss second
#define sg string
#define vec vector<li>
#define vvi vector<vector<li>>
#define pip pair<li,pair<li,li>>
#define pii pair<li,li>
#define vep vector<pair<li,li>>
#define mep map<li,li>
#define ves vector<string>
#define isort(n) sort(n.begin(), n.end())
#define dsort(n) sort(n.begin(), n.end(), greater<int>());
#define all(n) n.begin(), n.end()
#define ub upper_bound
#define lb lower_bound
#define maxe *max_element
#define mine *min_element
#define X INT_MAX
#define Y INT_MIN
#define sp " "
#define cy  cout<<"YES"<<endl
#define cn  cout<<"NO"<<endl
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define acc(v,r)  accumulate(v.begin(),v.begin()+r,0ll)
#define mxheap(T) priority_queue<T>
#define mnheap(T) priority_queue<T,vector<T>,greater<T>>
li MOD=1e9+7;   

int temporary;
int queries=1;
//debug
#ifndef ONLINE_JUDGE
#define dqy(x) cerr <<el<< "#" <<" "<<x<<"------>"; cerr << endl;
#define d(x) cerr << #x <<" "; _print(x); cerr << endl;
#define d2(x,y) cerr << #x<<" "<<#y <<"  ";_print(x);cerr<<" ";_print(y); cerr << endl;
#define d3(x,y,z) cerr << #x<<" "<<#y<<" "<<#z <<"  ";_print(x);cerr<<" ";_print(y);cerr<<" ";_print(z); cerr << endl;
#define d4(a,b,c,d) cerr << #a<<" "<<#b<<" "<<#c <<" "<<#d<<" ";_print(a);cerr<<" ";_print(b);cerr<<" ";_print(c);cerr<<" ";_print(d); cerr << endl;
#define spc()  cerr << endl;
#else
#define d(x)
#define d2(x,y) 
#define d3(x,y,z) 
#define d4(a,b,c,d) 
#define dqy(x)
#define spc()
#endif

void _print(li t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(float t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T> void _print(stack<T>s){vector<T>v;while(s.size()){v.pb(s.top());s.pop();}_print(v);}
template<class T> void _print(queue<T>q){vector<T>v;while(q.size()){v.pb(q.front());q.pop();}_print(v);}
template<class T> void _print(priority_queue<T>q){vector<T>v;while(q.size()){v.pb(q.top());q.pop();}_print(v);}
template<class T> void _print(priority_queue<T,vector<T>,greater<T>>q){vector<T>v;while(q.size()){v.pb(q.top());q.pop();}_print(v);}
template<class T> void _print(deque<T>q){vector<T>v;while(q.size()){v.pb(q.front());q.pop_front();}_print(v);}
//

const int N=1e6+10;
vector<bool>prime(N,1);
vector<li>prime_no;
void prime_calculation(vector<bool>&prime,vector<li>&prime_no){prime[0]=0;prime[1]=0;for (int i = 2; i*i <=N ; ++i){if (prime[i]==1){for (int j = i*i; j <=N ; j+=i){prime[j]=0;}}}for (int i = 1; i <= N; ++i){if (prime[i]==1){prime_no.pb(i);}}}

//********************************************************************************

vector<li>fact(1e5+5,0); 
void factorial(){fact[0] = 1;for (int i = 1; i <= 100000; i++){fact[i] = (i * 1LL * fact[i - 1]) % MOD;}}
li power(li x, li y, li p =  MOD){li res = 1;x = x % p;while (y > 0){if (y & 1)res = (res * x) % p;y = y >> 1;x = (x * x) % p;}return res;}
li modInverse(li n, li p=MOD){return power(n, p - 2, p);}
li nCr(li n, li r, li p=MOD){if (n < r)return 0;if (r == 0)return 1;return (fact[n] * modInverse(fact[r], p) % p *1LL* modInverse(fact[n - r], p) % p) % p;}


//********************************************************************************
void print(map<li,li>m ){for(auto q:m){ct<<q.ff<<" "<<q.ss<<el;}ct<<el;}
void print(vector<pair<li,li>> &v){for(auto q:v){ct<<q.ff<<" "<<q.ss<<el;}ct<<el;}
li made_ceil(li divident,li divisor){if (divident%divisor==0){return (divident/divisor);}else{return (divident/divisor)+1;}}
void take(vector<li> &v , int size){for (int i = 0; i <size ; ++i){li k;cin>>k;v.pb(k);}}
void print(vector<li> &v ){for (int i = 0; i < v.size(); ++i){ct<<v[i]<<" ";}ct<<el;}
void print(vector<vector<int>> &v){for (int i = 0; i <v.size() ; ++i){for (int j = 0; j < v[i].size(); ++j){ct<<v[i][j]<<sp;}ct<<el;}}
void take(vector<vector<li>> &v , li n,li m){for (int i = 0; i <n ; ++i){vec temp;for (int j = 0; j < m; ++j){li x;cin>>x;temp.pb(x);}v.pb(temp);}}
bool cmp(pair<li,li>a,pair<li,li>b){if (a.ff!=b.ff){return a.ff<b.ff;}return a.ss>b.ss;}
void print(vec adj[],int n){for (int i = 0; i < n; ++i){ct<<i<<sp<<":"<<sp;for(auto t:adj[i]){ct<<t<<sp;}ct<<el;}ct<<el;}
sg number_to_binary(li n){sg ans;while(n){if (n&1){ans+='1';}else ans+='0';n=n>>1;}reverse(all(ans));return ans;}
li binary_to_number(sg s){reverse(all(s));li ans=0;for (int i = 0; i < s.size(); ++i){if (s[i]=='1'){ans+=(1<<i);}}return ans;}





void pranay_prasoon(){
	int Q=temporary-queries;dqy(Q);

	int n;
	cin>>n;
	vector<vector<int>>dp(100,vector<int>(100,0));
	for (int i = 0; i < n; ++i)
	{
		int r1,r2,c1,c2;
		cin>>r1>>c1>>r2>>c2;
		for (int i = r1; i <=r2 ; ++i)
		{
			for (int j = c1; j <=c2 ; ++j)
			{
				dp[i][j]=1;
			}
		}
	}
    int ans=0;
    for (int i = 0; i <100 ; ++i)
    {
        for (int j = 0; j <100 ; ++j)
        {
            if(dp[i][j]==1)ans++;
          
        }
    }
    cout<<ans<<endl;
 

for(int j= ;j< ;j++){
	
}





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

    //factorial();
    //prime_calculation(prime,prime_no);

	cin >> queries;
	temporary=queries;
	while (queries--)
	{
		pranay_prasoon();
	}
	return 0;
}


