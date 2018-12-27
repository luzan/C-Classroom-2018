#include <stdio.h>
//to read values of 3x3 order matrix then compute the sum of even numbers.
int main() {
    int array[3][3],counter1,counter2,temp=2,sum=0;
    
    printf  ("Enter the elements for positions of 3x3 matrix as asked below: \n\n");
    
    // input part
    
    for (counter1=1;counter1<=3;counter1++)  {
        for (counter2=1;counter2<=3;counter2++)  {
            printf  ("a%d%d = ",counter1,counter2);
            scanf   ("%d",&array[counter1][counter2]);
        }
        
    }
    
    for (counter1=1;counter1<=3;counter1++)  {
        for (counter2=1;counter2<=3;counter2++)  {
            printf("%d\t", array[counter1][counter2]);
//            if (array[counter1][counter2]%temp==0)  {
//                sum = sum + array[counter1][counter2];
//            }
                
        }  
		printf("\n"); 
    }
    // calculation part
    
    for (counter1=1;counter1<=3;counter1++)  {
        for (counter2=1;counter2<=3;counter2++)  {
            
            if (array[counter1][counter2]%temp==0)  {
                sum = sum + array[counter1][counter2];
            }
                
        }   
    }
    
    printf("\n\nThe sum of the even numbers in the given matrix is : %d",sum);
    
}
