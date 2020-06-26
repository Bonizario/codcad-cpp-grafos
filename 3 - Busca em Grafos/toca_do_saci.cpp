#include <stdio.h>

int a[1001][1001];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    int i, j, n, m, x, y, ans = 0;
    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 3)
                x = i, y = j;
        }

    while (a[x][y] != 2)
        for (i = 0; i < 4; i++)
            if (a[x + dx[i]][y + dy[i]]) {
                ans++, a[x][y] = 0, x += dx[i], y += dy[i];
                break;
            }

    printf("%d\n", ans + 1);

    return 0;
}
