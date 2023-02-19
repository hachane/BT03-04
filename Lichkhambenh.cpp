#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main ()
{
    int n; cin >> n;
    int time[n], cho[n] = {0}, sum = 0;
    for (int i = 0; i < n; i++) cin >> time[i];
    sort(time, time + n);
    for (int i = 0; i < n; i++)
    {
        cho[i + 1] = cho[i] + time[i];
        sum += cho[i];
    }
    cout << sum << endl;
    return 0;
}
