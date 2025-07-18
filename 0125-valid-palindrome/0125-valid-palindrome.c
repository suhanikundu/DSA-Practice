bool check(int i, int j, char* s) {
    if (i >= j) return true;

    if (!isalnum(s[i]))
        return check(i + 1, j, s);

    if (!isalnum(s[j]))
        return check(i, j - 1, s);

    if (tolower(s[i]) != tolower(s[j]))
        return false;

    return check(i + 1, j - 1, s);
}

bool isPalindrome(char* s) {
    int n = strlen(s);
    return check(0, n - 1, s);
}