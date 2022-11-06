//
// Created by victor on 28/05/22.
//

// Reference: https://leetcode.com/problems/excel-sheet-column-number/

#include <iostream>
#include <map>
using namespace std;

// First create a dictionary that have the letter
// as key and their number representation as value.

// Second

class Solution {
private:
    map<char, int> letter_value = {
            {'A',1},
            {'B',2},
            {'C',3},
            {'D',4},
            {'E',5},
            {'F',6},
            {'G',7},
            {'H',8},
            {'I',9},
            {'J',10},
            {'K',11},
            {'L',12},
            {'M',13},
            {'N',14},
            {'O',15},
            {'P',16},
            {'Q',17},
            {'R',18},
            {'S',19},
            {'T',20},
            {'U',21},
            {'V',22},
            {'W',23},
            {'X',24},
            {'Y',25},
            {'Z',26}
    };

public:
    int titleToNumber(string columnTitle) {
        int columnTitleLen = columnTitle.length();
        char lastLetter = columnTitle[columnTitleLen-1];
        int columNumber = 0;

        for (int i = 0; i < columnTitleLen; ++i) {
            if(i != 0){
                co
            }
        }

    }
};