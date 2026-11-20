int reverseNumber(int x) {
    int rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    for (int day = i; day <= j; day++) {
        int diff = day - reverseNumber(day);
        if (diff < 0) diff = -diff;
        if (diff % k == 0)
            count++;
    }
    return count;
}
