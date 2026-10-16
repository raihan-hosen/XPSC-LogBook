#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    set<char> st;
    cin >> s;
    for (char c : s)
    {
        st.insert(c);
    }
    if (st.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}

int main()
{
    solve();
    return 0;
}
