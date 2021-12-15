#include <stdio.h>
 void print_1stNegative_Int(int arr[], int k, int n)
{
    int p= 0;
    int N_ele;
    for(int i = k - 1; i < n; i++)
    {
        while((p< i ) && (p <= i - k ||arr[p] > 0))
        {
          p ++;
        } 
        if(arr[p] < 0)
        {
            N_ele = arr[p];
        }
        else
        {
            N_ele = 0;
        }
        printf("%d ",N_ele);
    }
}
int main()
{
	int i,n,k,s,arr[s];
	printf("Enter the size of array");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("Enter the value to be added in array\n");
		scanf("%d",&arr[i]);
	}
	n=i;
    printf("Enter the value of  k");
	scanf("%d",&k);
     print_1stNegative_Int(arr, k, n);   
}
