class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length()) 
            return false;
        string s3 = s1, s4 = s2;
        sort(s3.begin(), s3.end());
        sort(s4.begin(), s4.end());
        if (s3 != s4)
            return false;
        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i])
                count++;
        }
        return (count == 0 or count == 2) ? true : false;
    }
};