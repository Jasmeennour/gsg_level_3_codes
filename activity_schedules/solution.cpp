#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
using ll = long long;
#define vi vector
#define all(v) ((v).begin()),((v).end())
#define MP make_pair
#define be begin()
#define en end()
#define pb push_back
#define fi first
#define se second
#define big 1000000007
#include <cstdlib>
#define loop(i, n) for (int (i) = 0; (i)<(n); (i)++)
using namespace std;
ll mod = 998244353, base = 31;
int ans=INT_MAX;
const int MOD = 1073741824  ;
const int N = 1e5 + 7;
const int bigN = 1e9 + 5;
vector <int>luck;
string arr[3]={"Football","Running","Swimming"};
vector<string>a;
ll Count=0;
void yasmeen() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void rec(int n)

{
    if(a.size()==n)
    {
        Count++;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
     for(int i=0;i<3;i++)
        {
            if(!a.size()||a.back()!=arr[i])
            {

                a.push_back(arr[i]);
                rec(n);
                a.pop_back();
            }
        }



}
int main() {
    yasmeen();
    int n;  cin>>n;
    rec(n);
    cout<<"Count"<<Count;
    return 0;
}
