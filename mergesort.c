// #include <stdio.h>

// void display(int *a, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// void merge(int *a, int mid, int low, int high)
// {
//     int i, j, k, b[100];
//     i = low;
//     j = mid + 1;
//     k = low;

//     while (i <= mid && j <= high)
//     {
//         if (a[i] < a[j])
//         {
//             b[k] = a[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             b[k] = a[j];
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         b[k] = a[i];
//         k++;
//         i++;
//     }
//     while (j <= high)
//     {
//         b[k] = a[j];
//         k++;
//         j++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         a[i] = b[i];
//     }
// }

// void mergesort(int a[], int low, int high)
// {
//     int mid;
//     if (low < high)
//     {
//         mid = (low + high) / 2;
//         mergesort(a, low, mid);
//         mergesort(a, mid + 1, high);
//         merge(a, mid, low, high);
//     }
// }

// int main()
// {

//     int a[] = {2, 1, 5, 3, 7, 6};
//     int m = sizeof(a) / sizeof(int);
//     display(a, m);
//     mergesort(a, 0, m - 1);
//     display(a, m);
//     return 0;
// }

// #include <stdio.h>

// void display(int *a, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// void merge(int *a, int low, int mid, int high)
// {
//     int i, j, k, b[50];
//     i = low;
//     j = mid + 1;
//     k = low;

//     while (i <= mid && j <= high)
//     {
//         if (a[i] < a[j])
//         {
//             b[k] = a[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             b[k] = a[j];
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         b[k] = a[i];
//         i++;
//         k++;
//     }
//     while (j <= high)
//     {
//         b[k] = a[j];
//         k++;
//         j++;
//     }
//         for (int i = low; i <= high; i++)
//         {
//             a[i] = b[i];
//         }
// }

// void mergesort(int *a, int low, int high)
// {
//     int mid;
//     if(low<high){
//         mid=(low+high)/2;
//         mergesort(a,low,mid);
//         mergesort(a,mid+1,high);
//         merge(a,low,mid,high);

//     }
// }

// int main()
// {

//     int a[] = {2, 10,15, 3, 7, 6};
//     int m = sizeof(a) / sizeof(int);
//     display(a, m);
//     mergesort(a, 0, m - 1);
//     display(a, m);
//     return 0;
// }

// #include <stdio.h>

// void display(int *a, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// void merge(int *a, int low, int mid, int high)
// {
//     int i, j, k, b[30];
//     i = low;
//     j = mid + 1;
//     k = low;
//     while (i <= mid && j <= high)
//     {
//         if (a[i] < a[j])
//         {
//             b[k] = a[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             b[k] = a[j];
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         b[k] = a[i];
//         i++;
//         k++;
//     }

//     while (j <= high)
//     {
//         b[k] = a[j];
//         j++;
//         k++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         a[i] = b[i];
//     }
// }

// void mergesort(int *a, int low, int high)
// {
//     int mid;
//     if (low < high)
//     {
//         mid = (low + high) / 2;
//         mergesort(a, low, mid);
//         mergesort(a, mid + 1, high);
//         merge(a, low, mid, high);
//     }
// }
// int main()
// {
//     int a[] = {2, 15, 3, 9, 0, 10};
//     int n = sizeof(a) / sizeof(int);
//     display(a, n);
//     mergesort(a, 0, n - 1);
//     display(a, n);
//     return 0;
// }

#include<stdio.h>

void display(int*a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
}

void merge(int*a, int low ,int mid, int high ){
    int i,j,k,b[20];
    i=low;
    j=mid+1;
    k=low;
    while (i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k]=a[j];
        k++;
        j++;
    }
    for (int i = low; i <=high; i++)
    {
        a[i]=b[i];
    }
    
}
void mergesort(int *a, int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    int a[]={2,1,5,4,9,8};
    int n=sizeof(a)/sizeof(int);
    display(a,n);
    mergesort(a,0,n-1);
    display(a,n);
    return 0;
}