#include <bits/stdc++.h>
using namespace std;
string intToRoman(int num) {
    string answer = "";
    map <int,string> mp ={
        {1, "I"},
        {4, "IV"},
        {5, "V"},
        {9, "IX"},
        {10, "X"},
        {40, "XL"},
        {50, "L"},
        {90, "XC"},
        {100, "C"},
        {400, "CD"},
        {500, "D"},
        {900, "CM"},
        {1000, "M"},
    };
    vector<int> nums = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    while(num > 0){
        auto it = lower_bound(nums.begin(),nums.end(),num);
        cout << *it << endl;
        if (it != nums.end()) {
            answer += mp[*it];
            num -= *it;
        }
    }
    return answer;
}
int main(void){
    int num;
    cin >> num;
    cout << intToRoman(num) << endl;
}