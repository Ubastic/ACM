class Solution {
public:
    /**
     * @param nums: an array of integers
     * @return: the maximun difference
     */
    int maximumGap(vector<int> &nums) {
        if (nums.size() < 2) {
            return 0;
        }

        auto range = minmax_element(nums.begin(), nums.end());
        int minimum = *range.first;
        int maximum = *range.second;
        if (minimum == maximum) {
            return 0;
        }
        
        // Define bucket.
        int gap = max((maximum - minimum) / (int(nums.size()) - 1), 1);
        int bucket_count = (maximum - minimum) / gap + 1;
        unordered_map<int, int> bucketsMin;
        unordered_map<int, int> bucketsMax;
        
        // Insert numbers. Only store maximum and minimum value for each bucket.
        for (int num : nums) {
            int k = (num - minimum) / gap;
            if (bucketsMin.find(k) == bucketsMin.end()) {
                bucketsMin[k] = num;
                bucketsMax[k] = num;
            } else {
                bucketsMin[k] = min(bucketsMin[k], num);
                bucketsMax[k] = max(bucketsMax[k], num);
            }
        }
        
        // Scan and find max gap.
        int left = 0, right = left + 1; 
        int max_gap = INT_MIN;
        while (left < bucket_count and right < bucket_count) {
            while (right < bucket_count and bucketsMin.find(right) == bucketsMin.end()) {
                right++;
            }
            max_gap = max(max_gap, bucketsMin[right] - bucketsMax[left]);
            left = right++;
        }
        return max_gap;
    }
};
