//
// Created by ereno on 10/06/2023.
//
#include <iostream>


using namespace std;

void reverse_array(int* arr, int size) {
    //-- Write your code below this line


    for (size_t i{0}; i<(size+1)/2; i++){

        int temp = *(arr+i);
        *(arr+i) = *(arr+(size-i-1));
        *(arr+(size-i-1)) = temp;
        //cout<< *(arr+i) << endl;

    }


    //cout<< *arr;
    //<< *(arr+1);

    //-- Write your code above this line
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    //cout << size;



    reverse_array(arr, size);

    for(auto num : arr)
        cout << num << endl;

}

// After the function call, the array should be reversed:
// arr[] = {5, 4, 3, 2, 1}
