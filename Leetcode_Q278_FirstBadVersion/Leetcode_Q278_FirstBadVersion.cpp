#include <iostream>

using namespace std;

bool isBadVersion(int version) {
    if (version > 1) {
        return true;
    }
    else {
        return false;
    }
    
    return false;
}

int firstBadVersion(int n) {
    int start = 1;
    int end = n;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (isBadVersion(mid)) {
            end = mid;
        }
        else {
            start = mid + 1;
        }
    }

    return start;
}

int main()
{
    cout << firstBadVersion(5);

    return 0;
}