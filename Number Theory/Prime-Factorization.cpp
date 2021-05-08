//Function To Get Prime Factors
vector<int> primes(int n) {
    vector<int> prime_fact;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            n /= i;
            prime_fact.push_back(i);
        }
        if (n != 1)
            prime_fact.push_back(n);
    }
    return prime_fact;
}