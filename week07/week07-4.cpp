//week07-4.cpp
//58 LeetCode

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss >> word){//一直讀字  到word 運用今天考試題目
            //什麼事都不做
        }
        return word.length();// 看最後字串的長度
    }
};
