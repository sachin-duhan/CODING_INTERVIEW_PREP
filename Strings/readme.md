# DP FOR STRINGS GUIDE

I have been doing DP problem on strings for a while and found a pattern / template to solve it, thought of sharing it with you.

1. If you have two strings.
```c++
/* Pre-processing. Define basic cases. */
for( int i = 1; i <= m; i++){
	for( int j = 1; j <= n; j++){
		if(s1[i - 1] == s2[j - 1]){
			/* Your code */
		}
		else{
			/* Your code */
		}
	}
}

/*-------------- 2. If you are given only one string ------------*/

/* Pre-processing. Define basic cases. */
for( int len = 1; len < n; len++){
	for( int i = 0; i + len < n; i++){
		int j = i + len;
		if(s1[i - 1] == s1[j - 1]){
			/* Your code */
		}
		else{
			/* Your code */
		}
	}
}
```

## Problem 1: Edit Distance

Step 1: Read the problem and try to understand it (Hardest Part)
Let's take this problem and find out what it says!

Two strings will be provided to you (Ex. horse and ros).
You can make 3 operations (Insert, Delete, Replace).
We have to find the minimum no. of operations to convert string1 to string2.
Example: horse and ros
Answer: 3 (You can find it how in the question.)

Step 2: Pre Processing (Tabulation & Define Base Cases)

We have to tabulate the answers for subproblems in order to use it again.
What is a cell in table means? dp[i,j] has the answer for the subproblem string1(:i) and string2(:j)

Define Base Cases. It varies from problem to problem.
In this problem the base cases are,

What if the string1 and string2 are empty?
What if the string1 is empty and string2 is not empty and vice versa?
Lets find it out.

Both String1 and String2 are empty: Then the answer to the subproblem is 0. Since minimum operations to be performed to make string1 as string2 is 0.
String1 is empty and String2 is not empty: We need insert characters to make it as string2. Minimum operations to be performed will be equal to string2 length.
String1 is not empty and String2 is empty: We have delete characters to make it as string2.
Step 3:
The main problem definition goes here.

If both the string have same character we don't have do any operations, So that min no of operations to be performed is equal to subproblem with state (i - 1, j - 1).
If characters are different, we can do three operations (Insert, Delete, Replace) We can find minimum between subproblems with states( dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j] ) + 1.
Why these states?

dp[i - 1][j - 1] => If we replace the character.
dp[i][j - 1] => If we delete the character.
dp[i - 1][j] => If we insert the character.
Return dp[string1.length][string2.length]. Since it contains the answer for subproblem between two strings.

Here is my C++ Code. Status: Accepted.
```c++
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        
        vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
        for(int i = 1; i <= n; i++){
            dp[i][0] = 1 + dp[i - 1][0];
        }
        for(int i = 1; i <= m; i++){
            dp[0][i] = 1 + dp[0][i - 1];
        }
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
              
                if(word2[i - 1] == word1[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]}) + 1;
                }
               
            } 
        }
        return dp[n][m];
    }
```

Problem 2: Delete Operations for Two Strings
STEP 1: Understand the problem.
Quick explanation: We can delete a character in either string in each move to make both string equal. Return minimum no. of moves.

STEP 2: Base Cases

Both strings are empty: 0
One string is empty. We have to delete all the character in other string to make it empty. So min. no of moves has to be equal to the length of the non-empty string.
STEP 3: Definition of problem.

If both characters are same. We dont have to delete it, so the moves will be equal to subproblem with state(i -1, j - 1)
If both characters are not the same. We can delete character from either string. So the min no of moves has to be minimum between dp[i][j - 1] and dp[i - 1][j].
Code:
```c++
 int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        
        vector<vector<int>> dp(m + 1, vector<int> (n + 1, 0));
        for(int i = 1; i <= m; i++){
            dp[i][0] = 1 + dp[i - 1][0];
        }
        for(int i = 1; i <= n; i++){
            dp[0][i] = 1 + dp[0][i - 1];
        }
        
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(word1[i - 1] == word2[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
                }
            }
        }
        return dp[m][n];

```

Problem 3: Minimum ASCII Delete Sum for two Strings
Similar to problem 2. One change here we store ASCII values instead of count of moves.
```c++
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        vector<vector<int>> dp(m + 1, vector<int> (n + 1, 0));
        for(int i = 1; i <= m; i++){
            dp[i][0] = dp[i - 1][0] + s1[i - 1];
        }
        for(int j = 1; j <= n; j++){
            dp[0][j] = dp[0][j - 1] + s2[j - 1];
        }
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(s1[i - 1] == s2[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = min((int) s1[i - 1] + dp[i -1][j], (int)s2[j - 1] + dp[i][j - 1]);
                }
            }
        }
        return dp[m][n];
    }
```

## Problem 4: Longest Palindromic Subsequence
STEP 1: Understand the question.
Return length of the longest palindrome subsequence.

STEP 2: Base Cases
Every single character is a palindrome.
What does a cell in the table or vector means? Maximum length of palindrome that exists between i and j.

STEP 3: Main definition.
It varies since single string is given. The code looks like interval dp problems.

What if two characters are matching? we have return 2 + dp[i + 1][j - 1].
Why? 2 for the two characters & then find for the interval i + 1 and j - 1.
What if two characters are not matching? We have find maximum between two subproblems (dp[i + 1][j] and dp[i][j - 1] )
Code.
```c++
    int longestPalindromeSubseq(string s) {
        int n = s.length(); 
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++){
            dp[i][i] = 1;
        }
        int count = 1;
        for(int len = 1; len < n; len++){
            for(int i = 0; i + len < n; i++){
                int j = i + len;
                if(s[i] == s[j]){
                    dp[i][j] = 2 + dp[i + 1][j - 1];
                }
                else{
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[0][n - 1];
```

## Problem 5: Palindromic Substrings
STEP 1: Understand Question
Count the number of palindrome substrings within a given string.

STEP 2: Base Cases

Every Single Character is a Palindrome. So start the count as the length of the string.
Check Adjacent. If the adjacent char is same we can increase the counter.
STEP 3: Main Definition
Template 2, Since single string is given.
One case => Find different i and j combinations. If the character i and j is matching, then we have to find whether i + 1 and j - 1 is matching or not. If matches, we can increase the count and mark it as a palindorme.

Code:
```c++
    int countSubstrings(string s) {
        int n = s.length();
        if(n < 2){
            return n;
        }
        vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
        for(int i = 1; i <= n; i++){
            dp[i][i] = 1;
        }
        int count = n;
        for(int i = 0; i < n; i++){
            if(s[i] == s[i + 1]) {
                count++;
                dp[i][i + 1] = 1;
            }
        }
        
        for(int len = 1; len < n; len++){
            for(int i = 0; i + len < n; i++){
                int j = len + i;
                if(s[i] == s[j] && dp[i + 1][j - 1]){
                    count++;
                    dp[i][j] = 1;
                }
            }
        }
        return count;
    }
```
