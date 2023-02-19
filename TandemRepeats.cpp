#include <bits/stdc++.h>
using namespace std;
bool check(string s, int n, int m, int i, int j)
{
    if(m - n != j - i) return false;
    else
    {
        for (int h = 0; h < m - n + 1; h++)
        {
            if(s[n + h] != s[i + h]) return false;
        }
    }
    return true;
}
int occurence(string s, int n, int m)
{
    int len = s.length();
    int res = 0;
    int pos = m + 1;
    for (int i = m + 1; i < len - (m - n + 1); i++)
    {
        while(check(s, n, m, pos, pos + (m - n)))
        {res++; pos += m - n + 1;}
    }
    return res;
}
int main ()
{
    int n, m; cin >> n >> m;
    string s; cin >> s;
    for (int i = 0; i < m; i++)
    {
        int n0, m0;
        cin >> n0 >> m0;
        cout << occurence(s, n0 - 1 , m0 - 1) << endl;
    }
    return 0;
}
