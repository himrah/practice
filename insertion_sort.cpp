#include "iostream"
#include<stdio.h>
using namespace std;
int main()
{
	int array[100],n,current_data,i,j,pre_pos,current_data;
	printf("Enter number of terms(should be less than 100): ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}


	for(i=1;i<n;i++)
	{
		current_data = array[i];
		pre_pos=i-1;
		while(current_data<array[pre_pos] && pre_pos>=0)
/*To sort elements in descending order, change current_data<array[j] to current_data>array[j] in above line.*/
		{
			array[pre_pos+1] = array[pre_pos];
			pre_pos--;
		}
		array[pre_pos+1]=current_data;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",array[i]);
    return 0;
}