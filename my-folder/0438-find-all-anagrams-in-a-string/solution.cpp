class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for(int i = 0; i < 26; i++) {
            if(freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int freq[26] = {0};   // frequency of pattern p

        // build frequency of p
        for(int i = 0; i < p.size(); i++) {
            freq[p[i] - 'a']++;
        }

        int windowSize = p.size();

        // slide window on s
        for(int i = 0; i + windowSize <= s.size(); i++) {

            int windFreq[26] = {0};  // frequency of current window

            for(int j = 0; j < windowSize; j++) {
                windFreq[s[i + j] - 'a']++;
            }

            if(isFreqSame(freq, windFreq)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

