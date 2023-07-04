class Solution {
public:
    int myAtoi(string s) {
        long long answer = 0;
        int result = 0;
        bool sign = false;
        bool digit = false;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                s = s.substr(i);
                break;
            }
        }

        if (s[0] == '-')
            sign = true;

        int start = (s[0] == '+' || s[0] == '-') ? 1 : 0;
        for (int i = start; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                if (answer > INT_MAX / 10 || (answer == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)) {
                    answer = (sign) ? INT_MIN : INT_MAX;
                    break;
                }
                answer *= 10;
                answer += s[i] - '0';
            } else
                break;
        }

        if (sign)
            answer *= -1;
        result = answer;
        return result;
    }
};