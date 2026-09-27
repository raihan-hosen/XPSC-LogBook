class Solution {
  public:
    int search(string &pat, string &txt) {
        int n = txt.length();
                int k = pat.length();

                if (k > n) return 0;

                vector patFreq(26, 0);
                vector winFreq(26, 0);

                for (int i = 0; i < k; i++) {
                    patFreq[pat[i] - 'a']++;
                    winFreq[txt[i] - 'a']++;
                }

                int count = 0;
                if (patFreq == winFreq) {
                    count++;
                }

                for (int i = k; i < n; i++) {
                    winFreq[txt[i] - 'a']++;
                    winFreq[txt[i - k] - 'a']--;

                    if (patFreq == winFreq) {
                        count++;
                    }
                }

                return count;
            }
};
