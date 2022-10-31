class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> vec;
        int a,b=names.size();
        for(a=0;a<b;a++)
        {
            vec.push_back({heights[a],names[a]});
        }
        sort(vec.begin(),vec.end());
        int c=0;
        for(a=b-1;a>=0;a--)
        {
            names[c++]=vec[a].second;
        }
        return names;
    }
};
