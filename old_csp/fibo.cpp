// #include <iostream>
// using namespace std;

// int main() {
//     int n, t1 = n-1, t2 = n+1, nextTerm = 0;
//     cin >> n;

//     for (int i = 1; i <= n; ++i) {
//       	nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     cout << t2;

//     return 0;
// }
#include <iostream>

int main() {
    int k;
    std::cin >> k;
    int t1 = 1, t2 = 1, nextTerm = 0;

    for (int i = 3; i <= k; ++i) {
        // Compute the next term in the sequence.
        nextTerm = t1 + t2;

        // Update t1 and t2 to prepare for the next iteration.
        t1 = t2;
        t2 = nextTerm;
    }

    std::cout << t2;

    return 0;
}