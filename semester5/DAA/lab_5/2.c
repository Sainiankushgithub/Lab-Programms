/*

5.2 Aim of the program: Huffman coding assigns variable length code words to fixed length
input characters based on their frequencies or probabilities of occurrence. Given a set of
characters along with their frequency of occurrences, write a c program to construct a Huffman
tree. Note#
● Declare a structure SYMBOL having members alphabet and frequency. Create a Min- Priority Queue, keyed on frequency attributes. ● Create an array of structures where size=number of alphabets. Input:
Enter the number of distinct alphabets: 6
Enter the alphabets: a b c d e f
Enter its frequencies: 45 13 12 16 9 5
Output:
In-order traversal of the tree (Huffman): a c b f e d

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a symbol with its frequency
typedef struct {
    char alphabet;
    int frequency;
} SYMBOL;

// Structure for the nodes of the Huffman Tree
typedef struct Node {
    SYMBOL symbol;
    struct Node *left;
    struct Node *right;
} Node;

// Min-Priority Queue
typedef struct {
    Node **array;
    int size;
} MinHeap;

// Function to create a new node
Node* createNode(SYMBOL symbol) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->symbol = symbol;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to create a MinHeap
MinHeap* createMinHeap(int capacity) {
    MinHeap* minHeap = (MinHeap*)malloc(sizeof(MinHeap));
    minHeap->array = (Node**)malloc(capacity * sizeof(Node*));
    minHeap->size = 0;
    return minHeap;
}

// Function to swap two nodes in the heap
void swap(Node** a, Node** b) {
    Node* temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify the MinHeap
void minHeapify(MinHeap* minHeap, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->symbol.frequency < minHeap->array[smallest]->symbol.frequency)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->symbol.frequency < minHeap->array[smallest]->symbol.frequency)
        smallest = right;

    if (smallest != idx) {
        swap(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

// Function to insert a new node into the MinHeap
void insertMinHeap(MinHeap* minHeap, Node* node) {
    minHeap->array[minHeap->size] = node;
    minHeap->size++;
    int i = minHeap->size - 1;

    // Fix the min heap property if it is violated
    while (i && minHeap->array[i]->symbol.frequency < minHeap->array[(i - 1) / 2]->symbol.frequency) {
        swap(&minHeap->array[i], &minHeap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to extract the minimum node from the MinHeap
Node* extractMin(MinHeap* minHeap) {
    if (minHeap->size == 0)
        return NULL;
    Node* root = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    minHeap->size--;
    minHeapify(minHeap, 0);
    return root;
}

// Function to build the Huffman Tree
Node* buildHuffmanTree(SYMBOL symbols[], int size) {
    MinHeap* minHeap = createMinHeap(size);

    // Create a MinHeap from the symbols
    for (int i = 0; i < size; i++) {
        insertMinHeap(minHeap, createNode(symbols[i]));
    }

    // Build the Huffman Tree
    while (minHeap->size > 1) {
        Node* left = extractMin(minHeap);
        Node* right = extractMin(minHeap);
        SYMBOL combined;
        combined.alphabet = '\0'; // No specific alphabet for internal nodes
        combined.frequency = left->symbol.frequency + right->symbol.frequency;

        Node* newNode = createNode(combined);
        newNode->left = left;
        newNode->right = right;
        insertMinHeap(minHeap, newNode);
    }

    // The remaining node is the root of the Huffman Tree
    return extractMin(minHeap);
}

// Function for in-order traversal of the Huffman Tree
void inOrderTraversal(Node* root) {
    if (root) {
        inOrderTraversal(root->left);
        if (root->symbol.alphabet != '\0') { // Only print leaf nodes
            printf("%c ", root->symbol.alphabet);
        }
        inOrderTraversal(root->right);
    }
}

int main() {
    int n;
    printf("Enter the number of distinct alphabets: ");
    scanf("%d", &n);

    SYMBOL symbols[n];
    printf("Enter the alphabets: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &symbols[i].alphabet); // Read a single character
    }

    printf("Enter its frequencies: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &symbols[i].frequency);
    }

    // Build Huffman Tree
    Node* root = buildHuffmanTree(symbols, n);

    // Output the in-order traversal of the tree
    printf("In-order traversal of the tree (Huffman): ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
