class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        multimap<int,int> mp;
        for(const auto& it: freq){
            mp.insert({it.second,it.first});
        }
        vector<int> ans;
        auto it=mp.rbegin();
        for(int i=0;i<k;i++){
            ans.push_back(it->second);
            ++it;
        }
        return ans;
    }
};
