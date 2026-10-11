
class Solution {
public:
    int maxVowels(string s, int k) {
        int vowelcount = 0;
        int maxcount = 0;

        for (int r = 0; r < k; r++) {
            if (isVowel(s[r])) {
                vowelcount++;
            }
        }

        maxcount = vowelcount;

        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i - k])) {
                vowelcount--;
            }

            if (isVowel(s[i])) {
                vowelcount++;
            }

            maxcount = max(maxcount, vowelcount);
        }

        return maxcount;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }
};
