// To check wether the array contains the element x or not


#include <stdio.h>

int main() {
	
	int n,x;  //taking inputs for the array elements, search element
	char ch='n';	// a flag variable
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the element to search: ");
	scanf("%d",&x);
	int arr[n];
	printf("Enter the elemnts inside the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(x == arr[i])
        {
            ch = 'y';
            break;
        }
    }
    
    if(ch == 'y')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}


