class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write=0;
        int read=0;
        while(read<nums.size()){
            if(nums[read]!=0){
                nums[write]=nums[read];
                write++;
            }
            read++;
        }
        while(write<nums.size()){
            nums[write]=0;
            write++;
        }
    }
};