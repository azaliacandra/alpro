#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[10005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int tail[10005]; 
    int length = 0; 

    for (int i = 0; i < n; i++) {
        int left = 0, right = length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (tail[mid] < arr[i]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        tail[left] = arr[i];
        
        if (left == length) {
            length++;
        }
    }

    int minimum_steps = n - length;
    printf("%d\n", minimum_steps);

    return 0;
}