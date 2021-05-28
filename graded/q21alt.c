#include<stdio.h>
#define arr_max 10
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
 

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[arr_max]={0};
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int t=0;
    mergeSort(a, 0, n - 1);
    t=(a[n-1]-a[0])/k;
    int b[arr_max]={0},init=a[0]+t,temp=0;
    if(k==1)
        goto L;
    for(int i=0;i<n;i++)
    {
        if(a[i]<init)
            temp++;
    }
    b[0]=temp;
    for(int i=1;i<k-1;i++)
    {
        for(int j=temp;j<n;j++)
        {   
            if(a[j]<(i*t+init))
                temp++;
            
        }
        b[i]=temp-b[i-1];

    }
    L:
    b[k-1]=n-temp;
    for(int i=0;i<k;i++)
        printf("%d ",b[i]);
    return 0;
}