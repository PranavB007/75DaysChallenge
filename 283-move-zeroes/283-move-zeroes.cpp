class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0)
            return;
        
        auto it = nums.begin();
        int n = nums.size();
        for(auto i= 0;i<n;i++)
        {
            if(nums[i] ==0)
            {
                nums.push_back(0);
                nums.erase(nums.begin() +i);
                n--;
                i--;
            }
        }
    }
};