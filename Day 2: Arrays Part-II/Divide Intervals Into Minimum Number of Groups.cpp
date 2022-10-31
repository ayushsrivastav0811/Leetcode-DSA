class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> v,v1;
        int a,b,c,d;
        for(a=0;a<intervals.size();a++)
        {
            v.push_back(intervals[a][0]);
            v1.push_back(intervals[a][1]);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        b=0;
        c=0;
        d=0;
        a=0;
        while(b<intervals.size())
        {
            while(b<intervals.size() && v[b]<=v1[d])
            {
                b++;
                c++;
            }            
            a=max(a,c);
            while(b<intervals.size() && v[b]>v1[d])
            {
                d++;
                c--;
            }
            a=max(a,c);
        }
        return a;
    }
};
