class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> table;
        for(int key: nums){
            if(table.find(key) == table.end()) table[key] = key;
            else return true;
        }
        return false;
    }
};