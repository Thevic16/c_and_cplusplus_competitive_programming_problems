//
// Created by victor on 28/05/22.
// https://leetcode.com/problems/shortest-distance-to-a-character/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// First obtain all the index where c appears.

// Second save in an array the abs of each appears
// index with a given index and return the lower one.

// Third do the second step for all the character of the string.

class Solution {
public:
    vector<int> get_indexs_appers(string s, char c){
        vector<int> indexs_appers;

        for (int i = 0; i < s.length(); ++i) {
            if(s[i] == c){
                indexs_appers.push_back(i);
            }
        }

        return indexs_appers;
    }

    int lower_distance(vector<int> indexs_appers, int index){
        vector<int> distances;

        for (int i = 0; i < indexs_appers.size(); ++i) {
            distances.push_back(abs( indexs_appers[i] - index));
        }
        return *min_element(distances.begin(), distances.end());
    }

    vector<int> shortestToChar(string s, char c) {
        vector<int> indexs_appers = get_indexs_appers(s, c);
        vector<int> shortest_distance;

        for (int i = 0; i < s.size(); ++i) {
            shortest_distance.push_back(lower_distance(indexs_appers,i));
        }
        return shortest_distance;
    }

};