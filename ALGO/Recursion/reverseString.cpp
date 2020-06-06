#include <iostream>
#include <vector>
using namespace std;

void helper(vector<char> &s, int start, int end)
{
    if (start >= end)
        return;
    swap(s[start++], s[end--]);
    helper(s, start, end);
}

void reverseString(vector<char> &s)
{
    if (s.size() == 0)
        return;
    helper(s, 0, s.size() - 1);
}

int main()
{
    vector<char> input({'h', 'e', 'l', 'l', 'o'});
    reverseString(input);
    for (auto chr : input)
        cout << chr;
    cout << endl;
    return 0;
}