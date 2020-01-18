//Only function
int removeDuplicates(vector<int>& nums) {
if(nums.size()==0)
    return 0;
int t=0;
for(int i=0;i<nums.size()-1;i++)
{
    
    if(nums[i]!=nums[i+1])
    {
        nums[t]=nums[i];
        t++;
    }
}
nums[t]=nums[nums.size()-1];
return t+1;
}
