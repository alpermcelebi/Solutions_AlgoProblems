class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret_vector;
        unordered_map<int, int> table;

        //adding nums to hash table
        for(int i = 0; i < nums.size(); i++)
            table[nums[i]] = i;

        //checking differences
        for(int i = 0; i < nums.size(); i++){
            int key = target - nums[i];
            if(table.find(key) != table.end()){
                int j = table[key];
                //special case
                if(i == j) continue;
                ret_vector.push_back(i);
                ret_vector.push_back(j);
                break;
            }
        }
        return ret_vector;
    }
};