__builtin_popcount(x) number of '1' bits
__builtin_ctz(x) number of trailing zeros
__builtin_clz(x) number of leading zeros
% 2 ----->  & 1
% 2 ^ x ----->  & (2 ^ x - 1)
k-th bit of x ----->  (x >> k) & 1
last k bits ----->  % 2 ^ k
a + b = (a ^ b) + 2(a & b)