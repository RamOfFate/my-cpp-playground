#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        for (int i = 0; i < m; ++i) {
            // Check if the current plot is empty
            if (flowerbed[i] == 0) {
                // Check if the left neighbor is empty or does not exist (at the beginning)
                bool left_empty = (i == 0) || (flowerbed[i - 1] == 0);
                // Check if the right neighbor is empty or does not exist (at the end)
                bool right_empty = (i == m - 1) || (flowerbed[i + 1] == 0);

                if (left_empty && right_empty) {
                    // Plant a flower
                    flowerbed[i] = 1;
                    --n;
                    // If all flowers are planted, return true immediately
                    if (n <= 0) {
                        return true;
                    }
                }
            }
        }
        // If the loop finishes, check if all flowers were planted
        return n <= 0;
    }
};

int main(){
    Solution solution;

    vector<int> flowerbed = {0,0,1,0,1};  

    cout << "result: " << endl;
    cout << solution.canPlaceFlowers(flowerbed, 1) << endl;
    return 0;
}