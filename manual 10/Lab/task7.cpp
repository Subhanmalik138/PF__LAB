#include <iostream>
using namespace std;
void reverseWords(string word);
int main() {
    string word;
    cout << "Enter the word: ";
    getline(cin, word);
    reverseWords(word);
    return 0;
}
void reverseWords(string word)
{
    int start = 0, end = 0, n = word.length()
    while (end <= n)
    {
        if (end == n || word[end] == ' ')
        {
            for (int i = end - 1; i >= start; i--)
            {
                cout << word[i];
            }
            if (end < n)
            {
                cout << " ";
            }
            start = end + 1;
        }
        end++;
    }
    cout << endl;
}
