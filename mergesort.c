
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