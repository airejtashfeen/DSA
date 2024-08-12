#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:

    int f(int day, int last, vector<vector<int>>& points, vector<vector<int>>&dp) {     
        if (day == 0) {
            int maxi = 0;
            for (int task = 0; task < 3; task++) {
                if (task != last) {
                    maxi = max(maxi, points[0][task]);
                }
            }
            return maxi;
        }

        if(dp[day][last]!=-1) return dp[day][last];

        int maxi = 0;
        for (int task = 0; task < 3; task++) {
            if (task != last) {
                int point = points[day][task] + f(day - 1, task, points,dp);
                maxi = max(maxi, point);
            }
        }
        return dp[day][last]= maxi;
    }

public:
    int ninjasTraining(int n, vector<vector<int>>& points) {

        vector<vector<int>>dp(n, vector<int>(4,-1)); 
        return f(n - 1, -1, points,dp);  
    }
};

int main() {
    Solution sol;
    vector<vector<int>> points = {
        {1, 2, 3},
        {3, 2, 1},
        {3, 1, 2},
        {1, 2, 3}
    };
    int n = points.size();
    cout << "Maximum points: " << sol.ninjasTraining(n, points) << endl;
    return 0;
}
