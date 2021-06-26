#include <iostream>

using namespace std;

int main() {

    int N, i, j, isPrime, n;
    long int sum = 0;
    int k = 0;
    cout << "Enter integer: ";
    cin >> N;
    for (i = 2; k < N; i++) {
        isPrime = 0;
/* Check whether i is prime or not */
        for (j = 2; j <= i / 2; j++) {
/* Check If any number between 2 to i/2 divides I
completely If yes the i cannot be prime number */
            if (i % j == 0) {
                isPrime = 1;
                break;
            }
        }
        if (isPrime == 0) {
            sum = sum + i;
            k++;
        }
    }
    cout << "Prime Sum: " << sum << endl;
    return 0;
}
