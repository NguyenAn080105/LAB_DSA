#include <bits/stdc++.h>
using namespace std;
/*
void QuickSort(int a[], int left, int right) {
    int i, j, pivot;
    pivot = a[(left + right) / 2];
    i = left; j = right;
    while (i <= j) {
        while (a[i] > pivot) i++;
        while (a[j] < pivot) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++; j--;
        }
    }
    if (left < j) QuickSort(a, left, j);
    if (i < right) QuickSort(a, i, right);
}

void QuickSort(int a[], int n) {
    QuickSort(a, 0, n - 1);
}
*/


void Heapify(int a[], int heapSize, int i) {
    int childLeft = i * 2 + 1;
    int childRight = i * 2 + 2;
    int max = i;
    if(childLeft < heapSize && a[max] > a[childLeft])
        max = childLeft;
    if(childRight < heapSize && a[max] > a[childRight])
        max = childRight;
    if(max != i) {
        swap(a[max], a[i]);
        Heapify(a, heapSize, max);
    }
}
void buildHeap(int a[], int n) {
    int heapSize = n;
    for(int i = n/2-1; i>=0; i--)
    Heapify(a, heapSize, i);
}
void HeapSort(int a[], int n) {
    int heapSize;
    heapSize = n;
    buildHeap(a, n);
    for(int i = n-1; i>=1 ; i--) {
        swap(a[0], a[i]);
        heapSize -= 1;
        Heapify(a, heapSize, 0);
    }
}
int main()
{
    int a[] = {8,2,1,9,4,5,7,6,3};
    HeapSort(a, 9);
    for(int x : a)
    {
        cout << x << " ";
    }
    return 0;
}