#include <stdio.h>
#include<stdlib.h>
void initialisation (int *);
void Tower_of_Hanoi ( int *, int , char[], char[], char[]);

void initialisation (int * step_count){
    *step_count=0;
}

void Tower_of_Hanoi ( int *step_count, int N, char S[], char A[], char T[]){
    if(N>0){
       Tower_of_Hanoi (step_count, (N-1), S, T, A);
       printf("\n Step No. %d : Transfer Disk %d from %s to %s", ++(*step_count), N, S, T);
       Tower_of_Hanoi (step_count, (N-1), A, S, T);
    }    
} 

void main(){
    int n, step_no;
    printf("Enter the Number of disks: ");
    scanf("%d", &n);
    if(n<=0){
      printf("ERROR: Please give a Valid Input.");
      exit(1);
    }
    initialisation(&step_no);
    char S[]="Source";
    char A[]="Auxillary";
    char T[]="Target";
    Tower_of_Hanoi ( &step_no, n,S,A,T);
}