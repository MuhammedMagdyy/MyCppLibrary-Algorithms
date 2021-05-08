int fact[N];

//Function To Get N choose (Binomial coefficient) R --- nCr = (n!) / (r! * (n-r)!)
int nCr(int n, int r) {
    return Mod_Mul(fact[n], Mod_Inverse(Mod_Mul(fact[r], fact[n - r])));
}