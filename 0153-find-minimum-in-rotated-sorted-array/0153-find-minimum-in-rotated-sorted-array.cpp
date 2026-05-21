class Solution {
public:
    int findMin(vector<int>& nums) {

        set <int> s;

        for(int a : nums)
        {
            s.insert(a);
        }

        return *s.begin();
        
    }
};