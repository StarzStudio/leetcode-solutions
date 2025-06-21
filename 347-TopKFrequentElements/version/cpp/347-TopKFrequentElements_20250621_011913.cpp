// Last updated: 6/21/2025, 1:19:13 AM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // get # of each element
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) 
        {
            freq[nums[i]]++;
        }

        // min heap for top k
        // (freq, num) as pair, which will compare freq first
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        
        for (auto kv : freq) 
        {
            min_heap.push(make_pair(kv.second, kv.first));
            if (min_heap.size() > k) 
            {
                min_heap.pop();
            }
        }

        vector<int> res;
        while (!min_heap.empty())
        {
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }

        return res;
    }
};