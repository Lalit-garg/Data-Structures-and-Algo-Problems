    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        int count=0,l=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return l-count;
    }
