#include <iostream>
#include <list>
#include <string>
using namespace std;

int n, m;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> s;

    list<char> l(s.begin(), s.end());
    list<char>::iterator it = l.end();   // 커서: 맨 뒤

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (it != l.begin()) it--;
        }
        else if (command == 'R') {
            if (it != l.end()) it++;
        }
        else if (command == 'D') {
            if (it != l.end()) it = l.erase(it);   // 커서 오른쪽 삭제
        }
        else if (command == 'P') {
            char c;
            cin >> c;
            l.insert(it, c);   // 커서 왼쪽에 삽입, it는 그대로
        }
    }

    for (char c : l) cout << c;
    cout << '\n';
    return 0;
}