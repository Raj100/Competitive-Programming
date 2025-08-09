#include <iostream>
using namespace std;

void decimalToBinaryModulo(long long decimal, long long n, long long& result) {
    long long binary = 0, place = 1;

    while (decimal > 0) {
        binary += (decimal % 2) * place;
        binary %= n;
        place *= 10;
        place %= n;  
        decimal /= 2;
    }


    result = (result * place + binary) % n;
}

int main() {
    long long t ;
    cin>>t ;
    while(t--){
    long long decimal, n;
    cin>>decimal ;
    n = 998244353 ;

    long long result = 0;

    for (long long i = 1; i <= decimal; i++) {
        decimalToBinaryModulo(i, n, result);
    }

    cout << result << endl;

    }

    return 0;
}