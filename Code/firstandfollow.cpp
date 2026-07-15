#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> productions;
map<char, set<char>> first_set, follow_set;

void find_first(char c) {
    for (auto prod : productions) {
        if (prod[0] == c) {
            char right_first = prod[3];
            if (!isupper(right_first)) {
                first_set[c].insert(right_first);
            }
            else {
                find_first(right_first);

                for (auto f : first_set[right_first]) {
                    first_set[c].insert(f);
                }
            }
        }
    }
}

void find_follow (char c, char start_sym) {
    if (c == start_sym) follow_set[c].insert('$');
    for (auto prod : productions) {
        string right = prod.substr(3);
        for (int i = 0; i < (int)right.size(); i++) {
            if (c == right[i]) {
                if (i + 1 < (int)right.size()) {
                    char nxt = right[i + 1];
                    if (!isupper(nxt)) {
                        follow_set[c].insert(nxt);
                    }
                    else {
                        for (auto f : first_set[nxt]) {
                            follow_set[c].insert(f);
                        }
                    }
                }

                if (i + 1 == (int)right.size() and c != prod[0]) {
                    find_follow(prod[0], start_sym);

                    for (auto f : follow_set[prod[0]]) {
                        follow_set[c].insert(f);
                    }
                }
            }
        }
    }
}

int main() {
    n = 3;
    productions = {"S->AB", "A->a", "B->b"};
    char start_symbol = 'S';

    for (auto prod : productions) {
        find_first(prod[0]);
    }

    for (auto prod : productions) {
        find_follow(prod[0], start_symbol);
    }

    cout << "FIRST Sets:\n";
    for (auto m : first_set) {
        cout << m.first << " = { ";
        for (char c : m.second) cout << c << " ";
        cout << "}\n";
    }

    cout << "\nFOLLOW Sets:\n";
    for (auto m : follow_set) {
        cout << m.first << " = { ";
        for (char c : m.second) cout << c << " ";
        cout << "}\n";
    }

    return 0;
}