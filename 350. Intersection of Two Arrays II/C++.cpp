class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intr;
        unordered_map<int, int> map;
        for(const auto& number: nums1){
            map[number]++;
        }
        for (const auto& number: nums2){
            map[number]--;
            if (map[number] >= 0) intr.push_back(number);
        }
        return intr;
    }
};