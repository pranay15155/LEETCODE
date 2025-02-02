#include <bits/stdc++.h>
template<class T> void _print(priority_queue<T,vector<T>,greater<T>> q) {vector<T> v; while(q.size()){v.pb(q.top()); q.pop();} _print(v);}
template<class T> void _print(deque<T> q) {vector<T> v; while(q.size()){v.pb(q.front()); q.pop_front();} _print(v);}

class Solution {
public:
    int maxFreeTime(int event, vector<int>& start, vector<int>& end) {
        vector<int>gap;
        int k=1;
        gap.push_back(start[0]-0);
        for(int i=1;i<start.size();i++){
            gap.push_back(start[i]-end[i-1]);
        }
        gap.push_back(event-end[end.size()-1]);
        
        int n=gap.size();
        multiset<int>mp;
        int ans=0,temp=0;
        vector<int>obstacle;
        for(int i=0;i<start.size();i++){
            obstacle.push_back(end[i]-start[i]);
        }
        for(auto &x:gap)mp.insert(x);
        d(obstacle);
        for(int i=0;i<gap.size()-1;i++){
            auto it = mp.find(gap[i]);
            if(it!=mp.end())mp.erase(it);
            auto it2=mp.find(gap[i+1]);
            if(it2!=mp.end())mp.erase(it2);

            auto z=mp.lower_bound(obstacle[i]);
            if(z!=mp.end())ans=max(ans,gap[i]+gap[i+1]+obstacle[i]);
            else ans=max(ans,gap[i]+gap[i+1]);

            mp.insert(gap[i]);
            mp.insert(gap[i+1]);
            
        }
        return ans;
    }
};
//gap
//0 2 3 1 0
//1 1 1 1
©leetcode