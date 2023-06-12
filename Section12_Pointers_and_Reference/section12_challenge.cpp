//
// Created by ereno on 12/06/2023.
//

#include <iostream>
using namespace std;


int *apply_all(const int *const array_1, size_t size_1, const int *const array_2, size_t size_2){

    int a {0};

    int *result {nullptr};
    result = new int[size_1*size_2];

    for (size_t i{0}; i < size_2; ++i)
        for (size_t j{0}; j < size_1; ++j){

            result[a++] = array_2[i] * array_1[j];

        }


    return result;

}



void print(const int *const arr, size_t size){
    cout << "[ ";
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " "; // or *(arr+i)
    cout << "]" << endl;

}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: " ;
    print(array1,array1_size);

    cout << "Array 2: " ;
    print(array2,array2_size);



    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    cout << "Result: " ;
    print(results, results_size);

    delete [] results;

    cout << endl;
    return 0;
}