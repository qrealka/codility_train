#include <algorithm>

using std::vector;

int solution(int X, vector<int> &A) {
    // write your code in C++11
    vector<bool> counts(A.size(), false);
    int index, countIndex = 0;
    const auto it = find_if(begin(A), end(A), [&](int value){
        index = value - 1;
        if (value <= X && index >= 0 && !counts[index]) {
            counts[index] = true;
            return ++countIndex == X;
        }
    });
    return it == A.end() ? -1 : distance(it, A.begin());
}

int main()
{
    return 0;
}