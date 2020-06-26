#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int di[4] = { 0, 0, 1, -1 };
    int dj[4] = { 1, -1, 0, 0 };

    char mapa[1002][1002];
    for (int i = 0; i < 1002; i++)
        for (int j = 0; j < 1002; j++)
            mapa[i][j] = '.';

    int N, M, ans = 0;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            cin >> mapa[i][j];

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            if (mapa[i][j] == '#')
                for (int k = 0; k < 4; k++)
                    if (mapa[i + di[k]][j + dj[k]] == '.') {
                        ans++;
                        break;
                    }

    cout << ans << "\n";

    return 0;
}
