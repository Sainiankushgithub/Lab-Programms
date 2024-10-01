// knapsack problem 
/*

5.1 Aim of the program: Write a program to find the maximum profit nearest to but not
exceeding the given knapsack capacity using the Fractional Knapsack algorithm. Notes# Declare a structure ITEM having data members item_id, item_profit, item_weight and
profit_weight_ratio. Apply heap sort technique to sort the items in non-increasing order, according to their profit /weight. Input:

Enter the number of items: 3
Enter the profit and weight of item no 1: 27 16
Enter the profit and weight of item no 2: 14 12
Enter the profit and weight of item no 3: 26 13
Enter the capacity of knapsack:18

Output:

Item No profit Weight Amount to be taken
3 26.000000 13.000000 1.000000
1 27.000000 16.000000 0.312500
2 14.000000 12.000000 0.000000
Maximum profit: 34.437500

 */

#include <stdio.h>

typedef struct {
    int item_id;
    float item_profit;
    float item_weight;
    float profit_weight_ratio;
} ITEM;

void swap(ITEM *a, ITEM *b) {
    ITEM temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(ITEM arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].profit_weight_ratio > arr[largest].profit_weight_ratio)
        largest = left;

    if (right < n && arr[right].profit_weight_ratio > arr[largest].profit_weight_ratio)
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(ITEM arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

float fractionalKnapsack(ITEM items[], int n, float capacity) {
    heapSort(items, n);
    
    float total_profit = 0.0;
    float total_weight = 0.0;
    float amount_taken[n];

    for (int i = 0; i < n; i++) {
        amount_taken[i] = 0; 
    }

    for (int i = 0; i < n; i++){                                                                                                                                        
        if (total_weight + items[i].item_weight <= capacity) {
            amount_taken[i] = 1.0;
            total_weight += items[i].item_weight;
            total_profit += items[i].item_profit;
        } else {
            float remaining_capacity = capacity - total_weight;
            amount_taken[i] = remaining_capacity / items[i].item_weight;
            total_profit += items[i].item_profit * amount_taken[i];
            break; 
        }
    }



    printf("Item No profit Weight Amount to be taken\n");
    for (int i = 0; i < n; i++) {
        printf("%d %.6f %.6f %.6f\n", items[i].item_id, items[i].item_profit, items[i].item_weight, amount_taken[i]);
    }
    
    return total_profit;
}

/*
void display(ITEM items[],int n)
{
  printf  ("Items |  profit   | weight  | profit_weight_ratio   |\n");
  for(int i=0;i<n;i++)
  {
    printf("%d     |  %d        | %d       | %d       |\n",i+1,items[i].item_profit,items[i].item_weight,items[i].profit_weight_ratio);
  }
  printf("\n");
}

*/

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    ITEM items[n];
    for (int i = 0; i < n; i++) {
        items[i].item_id = i + 1; 
        printf("Enter the profit and weight of item no %d: ", i + 1);
        scanf("%f %f", &items[i].item_profit, &items[i].item_weight);
        items[i].profit_weight_ratio = items[i].item_profit / items[i].item_weight; 
    }

    float capacity;
    printf("Enter the capacity of knapsack: ");
    scanf("%f", &capacity);

    // Fail to implement 
    // printf("Displaying the table \n");
    // display(items,n);
    float max_profit = fractionalKnapsack(items, n, capacity);
    printf("Maximum profit: %.6f\n", max_profit);

    return 0;
}
