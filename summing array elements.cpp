/* Mazhar Hussain    Reg no:20MDELE098
eamil:20MDELE098@uetmardan.edu.pk */
//lab 12 task 2//
#include<stdio.h>
void display(int array[6]){
	for(int i=0;i<6;i++){
		printf("\nthe element [%d] is: %d\n",i,array[i]);
	}
}
 
void sum(int array[6]){
	int sum=0;
	for (int j=0;j<6;j++){
		sum=sum+array[j];
	}
	printf("\n\nsum is:%d\n",sum);
} 
int main(){
	int array[6];
	for (int a=0;a<sizeof(array)/4;a++){
		printf("enter the number\n");
		scanf("%d",&array[a]);}
	display(array);
	sum(array);
	return 0;
}
