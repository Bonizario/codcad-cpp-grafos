#include <iostream>
#include <vector>
#include <algorithm>
#define MAXM 100001

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, N, M, op, A, B;
    cin >> N >> M;


    vector<int> pontes[MAXM];
    vector<int>::iterator it;

    for (i = 0; i < M; i++) {
        cin >> op >> A >> B;
        if (op == 1) {
            if (pontes[A].size() < 100 && pontes[B].size() < 100) {
                pontes[A].push_back(B);
                pontes[B].push_back(A);
            }
        } else {
            it = find(pontes[A].begin(), pontes[A].end(), B);

            if (it != pontes[A].end())
                cout << "1\n";
            else
                cout << "0\n";
        }
    }

    return 0;
}
