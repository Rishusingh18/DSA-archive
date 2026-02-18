class Solution {
public:
        int getVal(char ch){
        switch(ch){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0; 
            }
        }
    int romanToInt(string s) {
        int n= s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            if((i+1<n && getVal(s[i])<getVal(s[i+1])))
            sum -= getVal (s[i]);
            else
            sum += getVal(s[i]);

        }
        return sum;
    }
};