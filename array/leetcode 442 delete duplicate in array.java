// bruteforce approach

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>out;
        sort(nums.begin(),nums.end());

            for(int i=0; i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    out.push_back(nums[i]);
                }
            }
        
        return out;
    }
};

// optimized approach

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> out;
        for (int i=0;i<nums.size();i++){
            int index=abs(nums[i])-1;
            if (nums[index]<0){
                out.push_back(index+1);
            }
            else{
                nums[index]=-nums[index];
            }
        }
        return out;
    }
};