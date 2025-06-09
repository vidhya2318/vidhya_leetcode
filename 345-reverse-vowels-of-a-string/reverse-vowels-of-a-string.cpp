class Solution {
public:
    bool check(char c){
        c=tolower(c);
        return (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
    }
    string reverseVowels(string s) {
        int n=s.size();
        int l=0,r=n-1;        
        while(l<r){
            if(check(s[l]) && check(s[r]))
            {
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(check(s[l])==false)
                l++;
            else if(check(s[r])==false)
                r--;
        }
        return s;
    }
};