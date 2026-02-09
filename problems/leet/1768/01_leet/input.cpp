#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int wordIndex1 = 0;
            int wordIndex2 = 0;
            int finalStringIndex = 0;
            
            string returnString;
            returnString.resize(word1.size() +word2.size());

            while(wordIndex1 < word1.size() || wordIndex2 < word2.size()) {
                if(wordIndex1 < word1.size()) {
                    returnString[finalStringIndex++] = word1[wordIndex1++];    
                }
                if(wordIndex2 < word2.size()) {
                    returnString[finalStringIndex++] = word2[wordIndex2++];    
                }
            }
            //returnString[finalStringIndex] = '\0';
            return returnString; 
        }
};

int main(){
    Solution solution;

    string word1 = "abc";
    string word2 = "pqr";
    

    cout << solution.mergeAlternately(word1, word2) << endl;
    return 0;
}