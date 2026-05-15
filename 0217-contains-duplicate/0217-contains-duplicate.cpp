class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        map<int,int> mp;

        for(auto n : nums) mp[n]++;

        for(auto m : mp) if (m.second >1) return true;

        return false;
        
        
    }
};