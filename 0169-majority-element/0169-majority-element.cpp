class Solution {
public:
    int majorityElement(vector<int>& nums) {

            unordered_map<int ,int> map ; 

            for(auto i : nums)
            {
                if(map.contains(i)) map[i]++;
                else {

                    map.insert({i , 1});
                }
            }

            for(auto i : map)
            {
                if(i.second > nums.size()/2)
                {
                    return i.first;
                }
            }
            return 0;
        
    }
};