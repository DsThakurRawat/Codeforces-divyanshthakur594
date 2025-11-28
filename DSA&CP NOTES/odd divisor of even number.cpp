


// code to check odd divisor of even number using while loop -> remove all powers of two then if n>1 return yes else no


bool hasOddDivisor(long long n) {
    if (n % 2 != 0) return true; // odd number => odd divisor exists

    // remove all factors of 2
    while (n % 2 == 0) n /= 2;

    return n > 1; // odd part > 1 => odd divisor exists
}


/// bit trick
bool hasOddDivisor(long long n) {
    return (n & (n - 1)) != 0; // NOT a power of 2 -> has odd divisors
}
