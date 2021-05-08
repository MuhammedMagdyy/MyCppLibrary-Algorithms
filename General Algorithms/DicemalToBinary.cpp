//Function To Convert From Decimal To Binary
string Dec_To_Bin(int n) {
    string s;
    while (n) {
        s += (char) ((n % 2) + '0'), n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}