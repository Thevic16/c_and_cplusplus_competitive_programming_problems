#include <bits/stdc++.h>
using namespace std;

int main()
{
    string double_letter = "";
    char letter_one;
    char letter_two;
    int count_letter_one = 1;
    int count_letter_two = 0;
    int count_other_letter = 0;
    bool first_time_letter_two = true;

    cin >> double_letter;

    letter_one = double_letter[0];
    for (int i = 1; i < double_letter.length(); ++i) {
        if(double_letter[i] == letter_one){
            count_letter_one = count_letter_one + 1;
        }
        else if(double_letter[i] == letter_two){
            count_letter_two = count_letter_two + 1;
        }
        else if(first_time_letter_two){
            first_time_letter_two = false;
            letter_two = double_letter[i];
            count_letter_two = count_letter_two + 1;
        }
        else {
            count_other_letter = count_other_letter + 1;
        }
    }

    if(count_other_letter > 0){
        cout << "No";
    }
    else if (count_letter_one == 2 and count_letter_two == 2){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}