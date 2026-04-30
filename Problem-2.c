// Given a list of N integers, representing height of mountains. Find the height of the tallest mountain.
// First line will contain T, number of testcases. Then the testcases follow.
//The first line in each testcase contains one integer,N.
//The following line contains N space separated integers: the height of each mountains.

#include <stdio.h>

int main() {
	// your code goes here
	int test;
	printf("Enter the Number of Test Cases:");
	scanf("%d",&test);
	while(test--)
	{
	    int n;
	    printf("Enter the Number of Elements:");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter the elements inside the array:");
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int h;
	    h = arr[0];
	    for(int i=0;i<n;i++)
	    {
	        if(h < arr[i])
	        {
	            h = arr[i];
	        }
	    }
	    printf("Heighest Mountain in the Test Case are:");
	    printf("%d\n",h);
	}
}

