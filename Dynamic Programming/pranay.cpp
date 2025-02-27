#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define c(x) cout<<x<<endl;





#if __cplusplus < 201703L
template <typename... Ts>
using void_t = void;
#else
using std::void_t;
#endif

template <typename T, typename = void>
struct is_iterable : false_type
{
};

template <typename T>
struct is_iterable<T, void_t<
                          decltype(begin(declval<T>())),
                          decltype(end(declval<T>()))>> : true_type
{
};

template <typename T>
struct is_string : false_type
{
};

template <>
struct is_string<string> : true_type
{
};

template <typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U> &p)
{
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template <typename T>
typename enable_if<is_iterable<T>::value && !is_string<T>::value, ostream &>::type
operator<<(ostream &os, const T &container)
{
    os << "{ ";
    for (const auto &elem : container)
    {
        os << elem << " ";
    }
    os << "}";
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, stack<T> s)
{
    os << "stack { ";
    while (!s.empty())
    {
        os << s.top() << " ";
        s.pop();
    }
    os << "}";
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, queue<T> q)
{
    os << "queue { ";
    while (!q.empty())
    {
        os << q.front() << " ";
        q.pop();
    }
    os << "}";
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, priority_queue<T> pq)
{
    os << "priority_queue { ";
    while (!pq.empty())
    {
        os << pq.top() << " ";
        pq.pop();
    }
    os << "}";
    return os;
}

template <typename T, typename Container, typename Compare>
ostream &operator<<(ostream &os, priority_queue<T, Container, Compare> pq)
{
    os << "priority_queue { ";
    while (!pq.empty())
    {
        os << pq.top() << " ";
        pq.pop();
    }
    os << "}";
    return os;
}

//Binary Search Lower Bound
ll f(ll target, vector<ll> &nums)
{
    ll ans = -1;
    ll low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        ll mid = ((low + high) / 2);
        if (nums[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
// it returns least index,whose value is greater than or equal to target 

void pranay()
{
   
}


int main()
{
    int testcase;
    cin>>testcase;
    // testcase = 1;
    while (testcase--)
    {
        pranay();
    }
}