#include<stdlib.h>
int main(int argc,char**argv){
        int sum=0;
        if(argc>5)
                return 0;
        else
                for(int k=1;k<argc;k++){
                         sum=sum + atoi(argv[k]);
                }
        return sum;}

