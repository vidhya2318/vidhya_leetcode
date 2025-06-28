class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;

    for (int i = 0; i < nums.size(); i++) {
        pq.push({nums[i], i});
        if (pq.size() > k) pq.pop();  
    }

    vector<pair<int, int>> topK;
    while (!pq.empty()) {
        topK.push_back(pq.top());
        pq.pop();
    }

   
    sort(topK.begin(), topK.end(), [](auto& a, auto& b) {
        return a.second < b.second;
    });

    vector<int> result;
    for (auto& p : topK) result.push_back(p.first);

    return result;
}    
};