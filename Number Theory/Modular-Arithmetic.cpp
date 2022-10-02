//Note: MOD maybe 1e9+7
//Function To Take MOD in Summation
int Mod_Sum(int a, int b) {
    a = (a % MOD + MOD) % MOD;
    b = (b % MOD + MOD) % MOD;
    return (a + b) % MOD;
}

//Function To Take MOD in Multiplication
int Mod_Mul(int a, int b) {
    a = (a % MOD + MOD) % MOD;
    b = (b % MOD + MOD) % MOD;
    return (1LL * a * b) % MOD;
}

//Function To Get Fast Power
int Fast_Power(int a, int b) {
    // don't miss overflow
    if (b == 0)
        return 1;
    int value = Fast_Power(a, b / 2);
    if (!(b & 1))
        return Mod_Mul(value, value);
    return Mod_Mul(Mod_Mul(a, value), value);
}

//Function To Get MOD Inverse
int Mod_Inverse(int value) {
    return Fast_Power(value, MOD - 2);
}