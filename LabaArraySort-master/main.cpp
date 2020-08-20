#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

// 1 task
void selectionSort(int arr[], int n){
    int i, j , min_idx;

    for (i = 0; i < n-1; i++){
        min_idx = i;
        for(j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

         swap(&arr[min_idx], &arr[i]);
    }
}

// 2 task
void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
    }
}

// 3 task
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

// 5 task
void fillRandomArray(int array[], int n, int from, int to){
    srand(NULL);
    int range = to - from + 1;
    for(int i = 0; i < n; i++)
        array[i] = rand()%range + from;
}

void eraseValues(int arr[], int from, int to){
    for(int i = from; i < to; i++)
        arr[i] = 0;
}

bool isPrime(int n){
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void getPrimeNumbers(int number, int arr[], int length){
    for(int i = 0; i < length; i++){
        if(isPrime(i)){
            arr[i] = i;
        }
    }
}

void fillSorted(int arr[], int n1, int arr2[], int n2){
    int j = 0;
    for(int i = 0; i < n1; i++){
        if(isPrime(arr[i])){
            arr2[j] = arr[i];
            j++;
        }

        if (n2 == 25){
            break;
        }
    }
}



int main() {
    // 1 task
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/ sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);

    // 2 task
    int arr2[] = {12, 11, 13, 5, 6};
    int n2 = sizeof(arr2)/ sizeof(arr2[0]);
    insertionSort(arr2, n2);
    printArray(arr2, n2);

    // 3 task
    int arr3[] = {63, 34, 25, 12, 22, 11, 90};
    int n3 = sizeof(arr3)/ sizeof(arr3[0]);
    bubbleSort(arr3, n3);
    printArray(arr3, n3);

    // 5 task
    int A[40];
    fillRandomArray(A, 40, 100, 999);
    printArray(A, 40);
    eraseValues(A, 1, 25);
    printArray(A, 40);
    int B[100];
    getPrimeNumbers(100, B, 100);
    printArray(B, 100);
    std::cout << "\n";
    int C[25];
    fillSorted(B, 100, C, 25);
    printArray(C, 25);

}