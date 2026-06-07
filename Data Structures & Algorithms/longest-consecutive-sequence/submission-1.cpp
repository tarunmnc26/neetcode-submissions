class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int ans=0;
        for(auto x:st){
            int t=x;
            int temp=0;
            if(st.count(x-1)==0){
                while(st.count(t)!=0){
                    temp++;
                    t++;
                }
            }
            ans=max(ans,temp);
        } 
        return ans;
    }
};
