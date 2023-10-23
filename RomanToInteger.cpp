class Solution {
public:
    int romanToInt(string s) {
          int total = 0, index = 0;

        while(index != s.length())
        {
            if(s[index] == 'I')
            {
                if(s[index + 1] == 'V' || s[index + 1] == 'X')
                {
                    total -= 1; 
                }

                else
                {
                    total += 1;
                }
            }

            else if(s[index] == 'V')
            {
                total += 5;
            }

            else if(s[index] == 'X')
            {
                if(s[index + 1] == 'L' || s[index + 1] == 'C')
                {
                    total -= 10; 
                }

                else
                {
                    total += 10;
                }
            }

            else if(s[index] == 'L')
            {
                total += 50;
            }

            else if(s[index] == 'C')
            {
                if(s[index + 1] == 'D' || s[index + 1] == 'M')
                {
                    total -= 100; 
                }

                else
                {
                    total += 100;
                }
            }

            else if(s[index] == 'D')
            {
                total += 500;
            }

            else
            {
                total += 1000;
            }
            ++index;
        }
        return total;
    }
};
