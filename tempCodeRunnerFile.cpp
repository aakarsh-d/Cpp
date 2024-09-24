#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int arr[n]={1,1,3};
    int l=0;
    while(l<=n-1)
    {
        if(arr[l]==arr[l+1]){
        for(int r=1;r<n-1;r++)
        {
            arr[l]=arr[l+1];
        }
        n--;
        }
        else
        l++;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i];

}
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3;
//     int arr[] = {1, 1, 3};
    
//     int l = 0;
    
//     // The correct logic to remove duplicates in-place
//     for (int l = 0; l < n - 1; ) {
//         if (arr[l] == arr[l + 1]) {
//             // Shift elements to the left
//             for (int j = l + 1; j < n - 1; ++j) {
//                 arr[j] = arr[j + 1];
//             }
//             // Reduce the array size by 1
//             n--;
//         } else {
//             l++;
//         }
//     }

//     // Output the modified array and new length
//     cout << "New length: " << n << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
