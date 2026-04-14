class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> numbers;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 1+i; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    numbers.push_back(i);
                    numbers.push_back(j);
                    return numbers;
                }
            }
        }
        return numbers;
    }
};