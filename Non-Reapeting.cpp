#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char firstNonRepeatingChar(string s) {
    vector<int> count(26, 0);
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i] - 'a'] == 1) {
            return s[i];
        }
    }
    return '\0';
}

int main() {
    string s = "codeaxycm";
    char result = firstNonRepeatingChar(s);
    if (result == '\0') {
        cout << "No non-repeating characters found in the string." << endl;
    } else {
        cout << "The first non-repeating character in the string is: " << result << endl;
    }
    return 0;
}


// Approach 1 counting with unordered map
/*char firstNonRepeatingChar(string s) {
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    for (char c : s) {
        if (count[c] == 1) {
            return c;
        }
    }
    return '\0';
}
*/

// Approach 2  counting with vector
