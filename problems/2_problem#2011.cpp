//
// Created by victor on 27/05/22.
// Reference: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cont =0;

        for (int i = 0; i < operations.size(); ++i) {
            if(operations[i] == "++X" or operations[i] == "X++"){
                cont++;
            }
            else if(operations[i] == "--X" or operations[i] == "X--"){
                cont--;
            }

        }

        return cont;
    }
};
