#include "common.hpp"

void reverseArray(std::vector<int>& arr)
{
    for(int low=0, high=arr.size()-1; low<high; low++, high--){
        swap(arr[low], arr[high]);
    }
}

void arrays_0()
{
    std::vector<int> arr {1, 2, 3, 4, 5};
    reverseArray(arr);
}
