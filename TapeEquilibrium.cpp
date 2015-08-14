#include "bits/stdc++.h"
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A)
{
    if (A.empty())
        return -1;

    auto sumLeft = A.front();
    auto sumRight = std::accumulate(next(begin(A)), end(A), 0);
    auto result = abs(sumLeft - sumRight);
    std::for_each(next(begin(A)), prev(end(A)), [&](int value){
        sumLeft += value;
        sumRight -= value;
        const auto delta = abs(sumLeft - sumRight);
        if (delta < result)
            result = delta;
    });

    return result;
}

int main()
{

}

