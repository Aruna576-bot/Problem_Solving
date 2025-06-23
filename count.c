#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
 {
    int count=0;
    if (argc > 1) {
        printf("File Arguments: ");
        //taking lenght of argc
        int length=argc-1;
        //creating integer array for string array to integer array
        int arr_int[length];
        for (int i =0; i <length; i++)
        {
            //argc[i+1]means in every stringarray 0th index will take as an program name.
            printf("%s ",argv[i+1]);
            //storing string array values ot integer array. 
            arr_int[i]=atoi(argv[i+1]);
        }
        for(int i=0;i<length;i++)
        {
            int num=arr_int[i];
           if(num!=0)
                {
                    count+=num;.
                    
                }
                else
                break;
        }
          printf("\nArgument Count: %d\n", count);
    }
    else {
        printf("No arguments provided.\n");
    }
    return 0;
}

