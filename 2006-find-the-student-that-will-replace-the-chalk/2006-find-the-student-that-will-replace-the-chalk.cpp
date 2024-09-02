class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalChalk = 0;

        // Calculate the total chalk used in one round
        for(int i = 0; i < chalk.size(); i++) {
            totalChalk += chalk[i];
        }

        // Reduce k by modulo with totalChalk
        k %= totalChalk;

        // Find the student who will run out of chalk
        for(int i = 0; i < chalk.size(); i++) {
            if (k < chalk[i]) {
                return i;
            }
            k -= chalk[i];
        }

        return -1; // Just a safety return, in practice, it should never reach here
    }
};
