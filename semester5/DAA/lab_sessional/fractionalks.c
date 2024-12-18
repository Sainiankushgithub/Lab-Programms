#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int id;
    int weight;
    int profit;
} Item;

int compareByRatio(const void* a, const void* b) {
    Item* itemA = (Item*)a;
    Item* itemB = (Item*)b;
    double ratioA = (double)itemA->profit / itemA->weight;
    double ratioB = (double)itemB->profit / itemB->weight;
    return (ratioA > ratioB) ? -1 : 1;
}
double fractionalKnapsack(int capacity, Item items[], int n) {
    double totalValue = 0.0;
    printf("Items taken:\n");
    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            capacity -= items[i].weight;
            totalValue += items[i].profit;
            printf("  Item %d: weight = %d, profit = %d (100%% taken)\n", items[i].id, items[i].weight, items[i].profit);
        } else {
            
            double fraction = (double)capacity / items[i].weight;
            totalValue += items[i].profit * fraction;
            printf("  Item %d: weight = %d, profit = %d (%.2f%% taken)\n", items[i].id, items[i].weight, items[i].profit, fraction * 100);
            break;
        }
    }
    return totalValue;
}

void testKnapsack(int capacity, Item items[], int n, int (*compareFunc)(const void*, const void*), const char* sortCriteria) {
    qsort(items, n, sizeof(Item), compareFunc);
    printf("\nSorting by %s:\n", sortCriteria);
    double maxValue = fractionalKnapsack(capacity, items, n);
    printf("Total profit in knapsack: %.2f\n", maxValue);
}

int main() {
    int capacity = 18;
    Item items[] = {{1, 16, 27}, {2, 12, 14}, {3, 13, 26}}; 
    int n = sizeof(items) / sizeof(items[0]);
    testKnapsack(capacity, items, n, compareByRatio, "value-to-weight ratio");  
    return 0;
}
