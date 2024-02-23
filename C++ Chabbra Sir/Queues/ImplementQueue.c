#include <stdio.h>
#define MAX 4

int queue[MAX];
int front = -1;
int rear = -1;

int isFull()
{
    if(rear==MAX-1)
    {
        return -100;

    }
}

void compactQ()
{
    if(isFull())
    {
        printf("Queue is full!");
    }
    else
    {
        for(int i=front; i<=rear; i++)
        {
            queue[i] = queue[i-(rear-front)]; 
        }

    }
}


int isEmpty()
{
    if(front>=rear)
    {
        return -200;
    }
}

void insertQ(int val)
{
    if (isFull() == -100)
    {
        printf("Queue is full!\n");
    }
    else
    {
        rear++;
        queue[rear] = val;
    }
}

int deleteQ()
{
    if (isEmpty() == -200) 
    {
        printf("Queue is empty!\n");
    }

    front++;
    return queue[front];
}

void displayQ()
{
    for (int i = front + 1; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }

}

int main()
{
    int choice, val, idx;

    do
    {
        printf("Enter 0: compactQ, 1 : insertQ, 2 : deleteQ, 3 : displayQ : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
        compactQ();
        break;

        case 1:
            printf("Enter element to insert :");
            scanf("%d", &val);
            insertQ(val);
            break;

        case 2:
            idx = deleteQ();
            printf("%d\n", idx);
            break;

        case 3:
            displayQ();
            break;

        case 4:
            printf("Exiting...");
            break;

        default:
            printf("Enter correct choice!");
        }

    } while (choice != 4);

    return 0;
}
