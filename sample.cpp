#include <iostream>
#include <vector>
using namespace std;

vector<double> findAveragesOfSubarrays(int K, const vector<int>& arr) {
    vector<double> result;
    double windowSum = 0;
    int windowStart = 0;

    // Iterate over the array
    for (int windowEnd = 0; windowEnd < arr.size(); ++windowEnd) {
        windowSum += arr[windowEnd];  // Add the next element to the window sum

        // Once we've hit the window size 'K', calculate the average
        if (windowEnd >= K - 1) {
            result.push_back(windowSum / K);  // Calculate the average
            windowSum -= arr[windowStart];    // Subtract the element that's leaving the window
            ++windowStart;                    // Slide the window ahead
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int K = 5;
    vector<double> result = findAveragesOfSubarrays(K, arr);

    cout << "Averages of subarrays of size " << K << ": ";
    for (double avg : result) {
        cout << avg << " ";
    }

    return 0;
}
