#include <algorithm>
#include <map>

using std::vector;

int solution(vector<int> &A) {
    // write your code in C++11
    typedef std::multimap<int, int> Map;
    typedef Map::value_type MapValue;

    Map sorted;

    for (size_t i = 0; i < A.size(); ++i) {
        sorted.emplace(A[i], i);
    };

    int64_t maxDistance = -1;
    //auto maxIndexOne = -1, maxIndexTwo = -1;

    for (auto it = begin(sorted); it != end(sorted);) {
        const auto next = std::next(it);
        if (next == end(sorted))
            break;

        const auto distance =  abs(it->first - next->first);
        if (distance > 100000000)
            return -1;

        if (distance > maxDistance) {
            maxDistance = distance;
            //maxIndexOne = it->second;
            //maxIndexTwo = next->second;
        }
        it = next;
    }

    return (int) maxDistance;
}

int main()
{
    return 0;
}