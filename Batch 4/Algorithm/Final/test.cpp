#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        int maxArea = 0, left = 0, right = n - 1;
        int leftIndex = 0, rightIndex = 0;
        while (left < right) {
            int width = right - left;
            int height = min(heights[left], heights[right]);
            int currentArea = width * height;
            if (currentArea > maxArea) {
                maxArea = currentArea;
                leftIndex = left;
                rightIndex = right;
            }
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        cout << leftIndex << " " << rightIndex << endl;
    }
    return 0;
}
