// 01_knapsack problem using memoization 
#include<stdio.h>
#include<stdlib.h>

#define MAX_ITEM 100
#define MAX_WEIGHT 100

int memo[MAX_ITEM][MAX_WEIGHT];
int max(int a,int b){
  return (a>b)?a:b;
}
void initialization() {
    for (int i = 0; i < MAX_ITEM; i++) {
        for (int j = 0; j < MAX_WEIGHT; j++) {
            memo[i][j] = -1;
        }
    }
}

int knapsack(int weight[], int value[], int W, int n) {

    if (n == 0 || W == 0) {
        return 0;
    }

    if(memo[n][W]!=-1)
    {
      return memo[n][W];
    }

    if(weight[n-1]<=W){
      memo[n][W]=max(value[n-1]+knapsack(weight,value,W-weight[n-1],n-1),knapsack(weight,value,W,n-1));
    }
    else if(weight[n-1]>W)
    {
      memo[n][W]=knapsack(weight,value,W,n-1);
    }
    return memo[n][W];
}

int main() {
  // example 1
   /* int n = 4; 
    int W = 7; 
    int weight[] = {1, 3, 4, 5};
    int value[] = {1, 4, 5, 7};
    */

    // example 2 

    int n = 3;
    int W = 50;
    int weight[] = {10, 20, 30};
    int value[] = {60, 100, 200};
    initialization();
    int max_value = knapsack(weight, value, W, n);
    printf("Maximum value in Knapsack = %d\n", max_value);
    return 0;
}

