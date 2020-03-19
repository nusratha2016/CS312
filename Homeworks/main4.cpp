#include <iostream>
#include <cassert>
using namespace std;

void insert(int A[], int i, int key) {
  while(i >= 0 && A[i] > key) {
    A[i + 1] = A[i];
    i = i - 1;
  }
  A[i + 1] = key;
}

void insertionSort(int A[], size_t N) {
  for(int i = 1; i < N; i++)
  {
    int key = A[i];
    int j = i - 1;
    insert(A, j, key);
  }
}

bool isSorted(int A[], size_t N) {
  for(int i = 0; i < N - 1; i++) {
    if(A[i+1] < A[i])
    return false;
  }//else
  return true;
}

void printArray(int A[], size_t N) {
  std::cout << " { ";
  for(int i = 0; i < N; i++) {
    std::cout << A[i] << " ";
  }
  std::cout << "}" <<endl;
}

int main() {
  cout << "Given Array:" << endl;
  int A[] = {22, 11, 99, 88, 9, 7, 43};
  printArray(A, 7);

  /*First Block OF COMMENTS
 //assert(isSorted(A, 7));
 */

  insert(A, 0, 11);
  insert(A, 1, 99);
  insert(A, 2, 88);
  insert(A, 3, 9);
  insert(A, 4, 7);
  insert(A, 5, 42);

  /* SECOND BLOCK OF COMMENTS
  assert(isSorted(A, 7));
   */

  cout << "\nArray after sorting:" << endl;
  printArray(A, 7);

  int B[] = {222, 111, 999, 888, 99, 77, 422};
  insertionSort(B, 7);

  /* THIRD BLOCK OF COMMENTS
  //assert(isSorted(B, 7));
  */

  cout << "\nArray after sorting:" << endl;
  printArray(B, 7);

  int arrayAhmed[] = {11, 6, 8, 1, 36, 54, 37, 41, 29, 68};
  insertionSort(arrayAhmed, 10);
  //assert(isSorted(arrayAhmed, 10));
  cout << "\nArray after sorting:" << endl;
  printArray(arrayAhmed, 10);
}

// Question 1: Lines to put an element in the correct position in the array.
// Question 2: 1) Puts an element in the correct position in the array.
// 2) Array is not empty.
