#include <iostream>
#include <vector>
#include <string>

using namespace std;

string LongestCommonSubsequence(string seq1, string seq2) {
    int m = seq1.length();
    int n = seq2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (seq1[i - 1] == seq2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int length = dp[m][n];
    string lcs = "";
    int i = m, j = n;

    while (i > 0 && j > 0) {
        if (seq1[i - 1] == seq2[j - 1]) {
            lcs = seq1[i - 1] + lcs;
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    return lcs;
}

int main() {
    string seq1 = "EXPONENTIAL";
    string seq2 = "POLYNOMIAL";

    string lcs = LongestCommonSubsequence(seq1, seq2);
    cout << "Longest Common Subsequence: " << lcs << endl;

    return 0;
}
