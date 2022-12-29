#include<stdio.h>
#include<conio.h>
  
void main()
{
    int a[20],i,x,n;
	clrscr();
	printf("Linear search ");
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("Enter array elements:n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("nEnter element to search:");
    scanf("%d",&x);
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
     getch();
}


// ALGO 

//Step 1: Start

//Step 2: Accept a values from user i.e. array elements.


//Step 3. Accept element to be searched from user i.e. turget.

//Step 4: Set i-0, flag-0

//Step 5: Compare A[i] with target If(A[i] is a target)

//Step 6: Set flag-1 go to step 7 Else Move to next data element i=i+1.

//Step 7: If (in) go to step 5

//Step 8: If(flag-1) then Retum as position of target located Else Report as target no found.

//Step 9. Stop

