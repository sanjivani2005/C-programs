#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100];
    int i, m, n = 0, j;
    cout << "Enter the String: ";
    cin.getline(str, 100);
    m = strlen(str);
    j = m - 1;
    for (i = 0; i < m; i++) {
        if (str[j] == str[i]) {
            n++;
        }
        j--;
    }
    if (n == m) {
        cout << "String is Palindrome....";
    } else {
        cout << "String is not Palindrome....";
    }
    return 0;
}
