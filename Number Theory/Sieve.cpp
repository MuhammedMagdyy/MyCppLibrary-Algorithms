bool isPrime[N];

//Function To Find All Prime Numbers That Smaller Than N
void Sieve(int n) {
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            cout << i << ' ';
        }
    }
}