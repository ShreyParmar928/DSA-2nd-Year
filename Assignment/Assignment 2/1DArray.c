#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int n,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&ar[i]);
        sum = sum+ar[i];
    }  
    printf("%d",sum);
    return 0;
}


Link:  https://www.hackerrank.com/challenges/1d-arrays-in-c/submissions/code/292419150
