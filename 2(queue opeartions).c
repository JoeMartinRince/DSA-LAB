#include <stdio.h>

int main() {
    int n = 5; 
    int queue[n];
    int front = 0, rear = 0;
    char ch;
    int data;

    
    void enqueue() {
        printf("Enter number to enqueue: ");
        scanf("%d", &data);
        
        if (rear == n) {
            printf("Queue is full.\n");
        } else {
            queue[rear] = data;
            rear = rear + 1;
            printf("Queue: ");
            for (int i = 0; i < rear; i++) {
                printf("%d ", queue[i]);
            }
            printf("\n");
        }
    }

    
    void dequeue() {
        if (front == rear) {
            printf("Queue is empty.\n");
        } else {
      
            printf("Dequeued: %d\n", queue[front]);
            front = front + 1; 
            printf("Queue after dequeue: ");
            for (int i = front; i < rear; i++) {
                printf("%d ", queue[i]);
            }
            printf("\n");
        }
    }

   
    do {
        printf("1. Enqueue\n2. Dequeue\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);
        
        if (choice == 1) {
            enqueue();
        } else if (choice == 2) {
            dequeue();
        } else {
            printf("Invalid choice!\n");
        }

        printf("Do you want to continue (Y/N): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');  

    return 0;
}
