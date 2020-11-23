#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed << setprecision(20);

    long double a, b, h, m;

    cin >> a >> b >> h >> m;
    
    // 各針の角度
    long double h_ang = 2*M_PI * (h*60+m)/720;
    long double m_ang = 2*M_PI * m / 60;

    // 余弦定理
    long double ans = a*a + b*b - 2*a*b*cos(h_ang-m_ang);
    ans = sqrt(ans);

    cout << ans << endl;
}