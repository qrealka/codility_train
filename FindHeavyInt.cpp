#include <algorithm>

int computeStep(int num, int difference) {

    int step = 0;
    int i = 1;

    while (difference > 0) {
        const auto digitValue = num % 10;
        if (digitValue <  9){
            const int delta = digitValue < difference ? 9 - digitValue : difference;
            step += delta * i;
            difference -= delta;
            step += difference <  0 ? difference * i : 0;
        }
        i *= 10;
        num /= 10;
    }
    return step;
}

int solution(int A, int B) {
    int  heavyCount = 0;

    while (A <= B){

        int digitsSum = 0;
        int digitsCount = 0;

        for (int i = A; i; i /= 10) {
            digitsSum += i % 10;
            digitsCount++;
        }

        const auto checkSum = 7 * digitsCount + 1;

        if (digitsSum < checkSum) {
            A += std::max(1, computeStep(A, checkSum - digitsSum));
        } else {
            ++heavyCount;
            ++A;
        }
    }
    return heavyCount;
}

int main() {
    solution(8675, 8689);
    return 0;
}

