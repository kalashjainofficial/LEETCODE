class Solution {
public:
    int romanToInt(string s) {
        
            long long ans = 0;

        for (long long a = s.length() - 1; a >= 0; a--) {

            if (s[a] == 'I') {

                if(s[a+1] == 'V' || s[a+1] == 'X'){
                    ans += -1;

                }
                else{
                ans += 1;
                }
            }

            else if(s[a] == 'V'){
                ans += 5;
            }
            else if(s[a] == 'X'){

                if(s[a+1] == 'L' || s[a+1] == 'C'){
                    ans += -10;

                }
                else{
                ans += 10;
                }

            }

            else if(s[a] == 'L'){
                ans += 50;
            }

            else if(s[a] == 'C'){
                if(s[a+1] == 'D' || s[a+1] == 'M'){
                    ans += -100;

                }
                else{
                ans += 100;
                }
            }

            else if(s[a] == 'D'){
                ans += 500;
            }


            else if(s[a] == 'M'){
                ans += 1000;
            }

            
        }
        return ans;
    }

    
};