#include <iostream>
using namespace std;

char findNthCharacter(string S, int L, int N) {
    int len = S.length();
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < len; j++) {
            if (S[j] == 'x')
                S += "xyz";
            else if (S[j] == 'y')
                S += "yxz";
            else if (S[j] == 'z')
                S += "zxy";
        }
    }
    return S[N];
}

int main() {
    string S;
    int L, N;
    cin >> S >> L >> N;

    char result = findNthCharacter(S, L, N);
    cout << result << endl;

    return 0;
}
