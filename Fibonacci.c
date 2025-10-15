#include <stdio.h>
#include <stdlib.h>


void clean(){
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#elif defined(__linux__) || defined(__unix__)
    system("clear");
#endif
}

int main()
{   clean();
    //system("clear");
    int n,i,t[2],nxt;
    t[0]=t[1]=1;
    printf("\tEnter the number of terms of Fibonacci Series: ");
    scanf(" %3d",&n);

    printf("\n\n Fibonacci Series :\n");

    if(n<1){printf("\t Kya Engineer Banega Re Tuuu...!!!\n\n\n\n\n");
            exit(0);}
    if(n==t[0]){printf("\t %d",t[0]);}
    else if(n==t[1]){printf("\t %d \t %d\t",t[0],t[1]);}
      
    else
    {   printf(" %10d  %10d",t[0],t[1]);
        for(i=n-2;i>0;i--)
        {
            nxt=t[0]+t[1];
            printf(" %10d",nxt);  
            t[0]=t[1];
            t[1]=nxt;

        }

        printf("\n\n\n\n\n");
    }
        
    
    
       return 0;
}