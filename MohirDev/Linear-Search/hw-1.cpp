#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int target){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(target == arr[i]){
            count++;
        }
    }
    if(count == 0){
        cout<<"yo'q"<<endl;
    }
    else{
        cout<<"bor"<<endl;
    }
    
}

int main(){

    int myList [] = {1,3,4,6,7,8,10,12,23,45,56,78,99};
    int target = 12;
    int size =  sizeof(myList) / sizeof(myList[0]);
    LinearSearch(myList, size, target);
    return 0;
}