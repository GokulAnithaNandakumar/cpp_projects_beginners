#include <iostream>

int binary(int arr[], int target, int start, int end) {
    int mid=(start+end)/2;
    if (arr[mid]<target) {
        return binary(arr,target,mid+1,end);
    }
    if (arr[mid]>target) {
        return binary(arr,target,start,mid);
    }
    else{
        return mid;
    }
}
int main() {
    int arr[5];
    for (int i = 0; i<=4;i++) {
        std::cout << "The values of the array: ";
        std::cin >> arr[i];
    }
    int t,sol;
    std::cout << "The array is ";
    for (int j=0; j<=4; j++) {
        std::cout << arr[j] << " ";
    }
    std::cout << "\nTarget: ";
    std::cin >> t;
    sol = binary(arr, t, 0, sizeof(arr)/sizeof(arr[0]));
    std::cout << "the target is on index: ";
    std::cout << sol;
}