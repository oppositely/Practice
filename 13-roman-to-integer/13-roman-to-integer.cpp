class Solution {
public:
    int sol(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int sum=0, i;
        for(i=0; i<s.length()-1; i++) {
            sum += (sol(s[i])<sol(s[i+1]))?-1*sol(s[i]):sol(s[i]);
        }
        return sum+ sol(s[i]);
    } 
};