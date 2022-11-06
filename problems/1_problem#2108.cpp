//
// Created by victor on 27/05/22.
// Reference: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isPalindrome(string word){
        string word_reverse = word;
        reverse(word_reverse.begin(), word_reverse.end());

        if(word == word_reverse){
            return true;
        }
        else{
            return false;
        }
    }

    string firstPalindrome(vector<string>& words) {
        for (string word: words){
            if(isPalindrome(word)){
                return word;
            }
        }
        return "";
    }
};


