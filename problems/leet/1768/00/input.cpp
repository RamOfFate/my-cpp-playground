#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string merged;
            int length = min(word1.size(), word2.size());
            for (int i = 0; i < length; i++){
                merged += word1.at(i);
                merged += word2.at(i);
            }
            word1.size() != length ? merged.append(word1.substr(length, word1.size() - length)) : merged.append(word2.substr(length, word2.size()));
            return merged;
        }
};

int main(){
    Solution solution;

    string word1 = "abc";
    string word2 = "pqr";
    

    cout << solution.mergeAlternately(word1, word2) << endl;
    return 0;
}