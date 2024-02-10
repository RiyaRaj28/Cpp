#include <stdio.h>

void merge(int arr[50], int start, int mid, int end)
{
    int start1 = start, start2 = mid + 1, i = 0, temp[50];

    while (start1 <= mid && start2 <= end)
    {
        if (arr[start1] <= arr[start2])
        {
            temp[i] = arr[start1];
            start1++, i++;
        }

        else
        {
            temp[i] = arr[start2];
            start2++, i++;
        }
    }

    while (start1 <= mid)
    {
        temp[i] = arr[start1];
        start1++, i++;
    }

    while (start2 <= end)
    {
        temp[i] = arr[start2];
        start2++, i++;
    }

    for (int j = 0; j < i; j++)
    {
        arr[start + j] = temp[j];
    }
}

void MergeSort(int arr[50], int start, int end)
{
    if (end - start> 0)
    {
        int mid = (start + end ) / 2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[6] = {12, 8, -1, 17, 21, 0};
    MergeSort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}