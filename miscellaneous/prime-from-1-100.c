//wap to print prime numbers

#include <stdio.h>
int checkprime(int num){
        if (num<2)
        {
            return 0;
        }else{
        
        for (int i = 2; i < num/2; i++)
        {
            if(num%i == 0){
                return 0;
            }
        }
        }
        return 1;
}
int main()
{

    int num;
    for (int i = 1; i < 100; i++)
    {
        if(checkprime(i)){
        printf("%d, ",i);
    }
    }
    
    


}