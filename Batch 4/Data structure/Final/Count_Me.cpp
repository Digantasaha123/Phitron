#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        string word;
        string ans_str;

        int ans_int = 0;
        map<string, int> mp;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > ans_int)
            {
                ans_str = word;
                ans_int = mp[word];
            }
        }
        cout << ans_str << " " << ans_int << endl;
    }
    return 0;
}