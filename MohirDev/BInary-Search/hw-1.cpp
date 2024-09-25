#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int center = left + (right - left) / 2;
        
        if(arr[center] == target){
            return center;
        }
        if(arr[center] < target){
            left = center + 1;
        }
        else{
            right = center -1;
        }
    }
    return -1;
}

int main(){
                //   0 1 2 3 4 5 6  7  8  9  10 11 12
    int myList [] = {1,3,4,6,7,8,10,12,23,45,56,78,99};
    int target = 56;
    int size =  sizeof(myList) / sizeof(myList[0]);
    int result = BinarySearch(myList, size, target);

    if(result != -1){
        cout<<target<<" qiymati "<<result<<" indexda"<<endl;
    }
    else{
        cout<< "Not found"<<endl;
    }
    return 0;
}