class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //           <value, index>
        unordered_map<int, int> possible_solutions;
        vector<int> solution;
        
        for (int i = 0; i < nums.size(); i++) {
            // If target-nums[i] exists, then it's been iterated past and the solution is in the map.
            unordered_map<int,int>::iterator key = possible_solutions.find(target-nums[i]);
            if (key != possible_solutions.end()) {
                // possible_solutions[key] gives the index
                solution.push_back(possible_solutions[key->first]);
                solution.push_back(i);
            }
            
            possible_solutions[nums[i]] = i;
        }
        
        return solution;
    }
};