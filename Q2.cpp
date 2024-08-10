#include <bits/stdc++.h>

using namespace std;

void find_primes(int n) {
    if (n < 2) {
        cout << "There are no primes less than 2." << endl;
        return;
    }
    bool* is_prime = new bool[n + 1];
    for (int i = 0; i <= n; ++i) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    cout << "Prime numbers up to " << n << " are:" << endl;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    delete[] is_prime;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    find_primes(num);
    return 0;
}
