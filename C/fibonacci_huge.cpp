#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;
    int modu, a, b;
    int previous = 1;
    int current  = 1;
    for (int i = 0; i > -1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous% m + current% m;
        modu = current % m;
        //std::cout << modu << '\n';
        if(previous%m == 0 && modu == 1){            
            a = i + 2;//get Pisano period
            break;
        }
    }
    b = n % a;// get remainder of n devided by Pisano
    int previous_2 = 0;
    int current_2  = 1;
    if (b <= 1)
        return b;
    for (int i = 0; i < b - 1; ++i) {
        int tmp_pre = previous_2;
        previous_2 = current_2;
        current_2 = tmp_pre % m + current_2 % m ;
    }

    return current_2 % m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}
