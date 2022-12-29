#include<stdio.h>  
#include<conio.h>
#define N 11  
  
int main()  
{  
    int a[N], i, pos, num;  
  
    printf("Enter %d integer numbers\n", (N - 1));  
    for(i = 0; i < (N -1); i++)  
        scanf("%d", &a[i]);  
  
    printf("Enter the position where new number has to be inserted\n");  
    scanf("%d", &pos);  
  
    if(pos < N)  
    {  
        printf("Enter a new number to be inserted at position %d\n", pos);  
        scanf("%d", &num);  
        for(i = N - 1; i > pos; i--)  
                a[i] = a[i - 1];  
  
        a[pos] = num;  
  
        printf("Array after inserting %d at position %d\n", num, pos);  
        for(i = 0; i < N; i++)  
            printf("%d\n", a[i]);  
    }  
    else  
    {  
        printf("Please enter a position within the range/size of the array!\n");  
    }  
  
    printf("\n");  
  getch();
    return 0;  
} 


// ALGO 
//INSERT (A,N,POS,ITEM)

//STEP1-BEGIN
//SETP2-REAPET STEP 3 & 4 WHILE 1>POS
//STEP3-SET A [ I+1] = A [ I ]
//STEP4-SET I=I-1
//STEP5-SET A[POS]=ITEM
//STEP6-SET N=N+1
//STEP7-STOP
