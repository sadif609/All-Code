#include<bits/stdc++.h>
#define max  100

//arr - will have list of needed coins
int ans[max];
using namespace std;

int findMinCoins(int coins[], int size,  int value,int number[])
{
    int i, count = 0;

    for(i = 0; i < size; i++)
    {
        int ccount=0;
        //take as much from coins[i]
        while(value >= coins[i] )
        {
            //after taking the coin, reduce the value.
            value -= coins[i];
            ans[count] = coins[i];
            count++;
            ccount++;
            if(ccount>=number[i])
                break;

        }
        if(value == 0)
            break;

    }

    return count;
}

int main()
{
    int coins[] = {100,50,20,10,5};
    int number[5]={2,3,5,3,4};
    int value = 470, i;

    //find the size of the coins array
    int size = sizeof(coins)/sizeof(coins[0]);

    int MinCount = findMinCoins(coins,size,value,number);

    printf("Total Coins Needed = %d\n",MinCount);

    printf("Coins are:\t");
    for(i = 0; i < MinCount; i++)
        printf("%d ", ans[i]);

    return 0;
}
