#include<deque>
#include<bits/stdc++.h>
class LRUCache
{
    public:
    deque<pair<int,int> >result;
    int cp;
    LRUCache(const int &x)
    {
        cp=x;
    }
    int get(int x){
        for(int i=0;i<result.size();i++)
             if(result[i].first==x)
                 return result[i].second;
        return -1;
    }
    void set(int x,int y){
        int i=0;
        for(;i<result.size();i++)
        if(result[i].first==x)
        {
            result.erase(result.begin()+i);
             break;
        }
        if(i==cp)
            result.pop_back();
        result.push_front(make_pair(x,y));
    }
};
