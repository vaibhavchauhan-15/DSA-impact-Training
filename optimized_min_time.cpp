class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        // Define directions: right, left, down, up
        static const int dx[4] = {0, 0, 1, -1};
        static const int dy[4] = {1, -1, 0, 0};
        
        const int m = moveTime.size();
        const int n = moveTime[0].size();
        
        // Use a vector instead of priority queue for faster access
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        dist[0][0] = 0;
        
        // Using pair<int,int> for time and position indices instead of nested pairs
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0}); // Encoding position (0,0) as a single integer: 0
        
        while (!pq.empty()) {
            int currTime = pq.top().first;
            int pos = pq.top().second;
            pq.pop();
            
            int i = pos / n;
            int j = pos % n;
            
            // Skip if we've already found a better path
            if (currTime > dist[i][j]) continue;
            
            // If reached destination
            if (i == m - 1 && j == n - 1) {
                return currTime;
            }
            
            for (int k = 0; k < 4; ++k) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                
                if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                    int waitTime = max(0, moveTime[ni][nj] - currTime);
                    int nextTime = currTime + waitTime + 1;
                    
                    if (nextTime < dist[ni][nj]) {
                        dist[ni][nj] = nextTime;
                        pq.push({nextTime, ni * n + nj}); // Encode 2D position as 1D
                    }
                }
            }
        }
        
        return -1;
    }
};
