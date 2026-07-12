class Solution {
public:
    const int MOD = 1000000007;

    long long power(long long x, long long n) {
        if (n == 0)
            return 1;

        long long half = power(x, n / 2);

        if (n % 2 == 0)
            return (half * half) % MOD;
        else
            return (x * ((half * half) % MOD)) % MOD;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;  // Number of even indices
        long long odd = n / 2;         // Number of odd indices

        long long evenWays = power(5, even);
        long long oddWays = power(4, odd);

        return (evenWays * oddWays) % MOD;
    }
};
