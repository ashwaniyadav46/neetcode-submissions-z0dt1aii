class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string newword = "";
        int l1 = 0;
        int l2 = 0;
        int r1 = word1.size();
        int r2 = word2.size();
        while(l1 < r1 && l2 < r2){
             newword.push_back(word1[l1]);
             newword.push_back(word2[l2]);
            l1++;
            l2++;
        }
        while (l1 < r1){
            newword.push_back(word1[l1]);
            l1++; 
            }

        while (l2 < r2) {
            newword.push_back(word2[l2]);
            l2++;
        }
        return newword;
    }
};