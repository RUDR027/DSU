 #include <stdio.h>
#include<conio.h>
void main()
{
int a[100],x, n, i, j, position, swap;
clrscr();
printf("Selection sort ");
printf("\nEnter number of elements\n");
scanf("%d", &n);
printf("\nEnter %d Numbers\n", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
x=a[i];
a[i]=a[j];
a[j]=x;
}
}
}

printf("Sorted Array by selection sort:\n");
for(i = 0; i < n; i++)
printf("%d\n", a[i]);
getch();
}


//ALGO
//Step 1: Start

//Step 2: Set i=0, loc= 0 and temp=0 Repeat Steps 4-6 while i < size

//Step 3: Step 4: Set loc Min(arr, i, size)

//Step 5: Swap the elements stored at arr[i] and alloc] by performing the

//following steps

//Set temp = alloc] Set alloc]=a[i]

//Set a[i]=temp = i +1

//Step 6: Seti Step 
//8: Stop
