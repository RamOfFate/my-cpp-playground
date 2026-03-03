#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Solution {
public:
    /**
     * Mission: Find the first person who swiped twice in a row.
     * Return: The index of the first swipe of the pair.
     * Return -1 if no violation is found.
     */
    static int findSecurityViolation(const std::vector<int>& badge_logs) {
        // --- YOUR CODE STARTS HERE ---

        // 1. Use std::adjacent_find
        // 2. Check if the result is valid
        // 3. Return the index using std::distance
        auto it = std::adjacent_find(badge_logs.begin(), badge_logs.end());
        if (it != badge_logs.end())
        {
            return std::distance(badge_logs.begin(), it);
        }

        return -1; // Placeholder

        // --- YOUR CODE ENDS HERE ---
    }
};

// --- TEST HARNESS (The LeetCode "Run Code" logic) ---
int main() {
    Solution sol;

    struct TestCase {
        std::vector<int> logs;
        int expectedIndex;
        std::string description;
    };

    std::vector<TestCase> tests = {
        {{101, 204, 305, 305, 402}, 2, "Basic violation"},
        {{10, 20, 30, 40, 50}, -1, "Clean logs"},
        {{500, 500}, 0, "Violation at the very start"},
        {{100, 200, 300, 300}, 2, "Violation at the very end"}
    };

    for (const auto& test : tests) {
        int result = sol.findSecurityViolation(test.logs);
        if (result == test.expectedIndex) {
            std::cout << "[PASS] " << test.description << std::endl;
        } else {
            std::cout << "[FAIL] " << test.description
                      << " (Expected " << test.expectedIndex
                      << ", got " << result << ")" << std::endl;
        }
    }

    return 0;
}