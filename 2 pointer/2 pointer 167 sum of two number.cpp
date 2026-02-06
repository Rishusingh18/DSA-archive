class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n =arr.size();
        int left = 0 , right= n-1;
        int sum = 0;
        vector<int> output;
        while(left<right){
            sum = arr[left]+arr[right];
           if( sum > target){
            right--;
           }
           else if(sum < target){
            left++;
           }
           else{
            output.push_back(left +1 , right +1);
            break;
           }
        }
    return output;
    }
};