#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* link;
}node; 

void freeLinkedList(node* start)
{
    node *curr, *temp;

    curr = start; 

    while(curr!=NULL)
    {
        temp = curr->link;
        free(curr);
        curr = temp; 
    }
}

node* insert_at_pos(node *start, int pos)
{
    // if(pos==1)
    // {
    //     int data;
    //     printf("Enter data to insert at start :");
    //     scanf("%d", &data); 

    //     insert_at_start(start, data); 
    //     return start;
    // }

    node *previous = start;
    int count = 1; 
    while(count<pos-1 && previous != NULL)
    {
        previous = previous->link; 
        count++; 
    }

    if(previous == NULL)
    {
        printf("Insertion not allowed at invalid index!"); 
        return start; 
    }

    node *temp = (node*)malloc(sizeof(node));
    printf("Enter data to insert into node :");
    scanf("%d", &(temp->data)); 
    temp->link = previous->link; 
    previous->link = temp; 

    return start; 

}

node* insert_after_val(node *start, int data)
{
    node *temp = start;
    while(temp != NULL)
    {
        if(temp->data == data)
        {
    
        node *newnode = (node*)malloc(sizeof(node));
        printf("Enter data to insert into the node :");
    
        scanf("%d", &(newnode->data)); 
    
        newnode->link = temp->link;
        temp->link = newnode; 
    
        break; 
        }
        temp = temp->link; 
    }

    if(temp == NULL)
    {
        printf("Data is not present in the list.");
    }

    return start;
}

int delete_at_pos(node *start, int pos)
{
    node* ptr; 
    node* temp = start; 
    int count = 1; 

    while(count < pos-1)
    {
        temp = temp->link; 
        count++;
    }

    ptr = temp; 
    temp = temp->link; 
    int val = temp->data;
    ptr->link = temp->link; 
    free(temp);

    return val;
}

int delete_after_val(node *start, int data)
{
    node *temp = start;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            if(temp->link != NULL)
            {
            node *toDelete = temp->link;
 
            int val = toDelete->data;

            free(toDelete);
            return val;
        }
        else{
            printf("No node to delete!"); 
            return -1; 
        }
        }
        temp = temp->link; 
    }

        printf("Data is not present in the list.");
        return -1; 
    

}



node* create()
{
    node *start, *temp, *curr;

    int val, choice;
    printf("Do you want to add data to node? Enter 0 or 1");
    scanf("%d", &choice);

    if(choice==0)
    {
        start->link = NULL;
        return start;
    }

    printf("Enter data:");
    scanf("%d", &val); 
    start->data = val; 
    curr = start;

    do
    {
        printf("Do you want to add data to node? Enter 0 or 1 : ");
        scanf("%d", &choice);

        if(choice==0)  break; 

        temp = (node*)malloc(sizeof(node));
        printf("Enter value:");
        scanf("%d", &(temp->data));

        curr->link = temp;
        curr = curr->link; 
        
    } while (choice==1);

    curr->link = NULL;


    return start;         //allows user to access the list from start node pointer

}

node *create2()
{
     node *start, *temp, *curr;

    int val, choice;
    printf("Enter data. Enter -1 to stop. ");
    scanf("%d", &val); 

    if(val==-1)
    {
        start = NULL;
        return start;
    }
    start = (node*)malloc(sizeof(node));
    if(start==NULL)
    {
        printf("Memory allocation failed!");
        exit(1); 
    }


    start->data = val; 
    curr = start;

    do
    {
        int val; 
        printf("Enter data. Enter -1 to stop. ");
        scanf("%d", &val);

        if(val==-1)  break; 

        temp = (node*)malloc(sizeof(node));
        if(start==NULL)
        {
        printf("Memory allocation failed!");
        exit(1); 
        }

        temp->data = val; 
        curr->link = temp;
        curr = curr->link; 
        
    } while (val!=-1);

    curr->link = NULL;
    return start;         //allows user to access the list from start 


}

void traverse(node* start)
{
    node *temp;
    temp = start;
    
    printf("The created list is:\n");
    while(temp!=NULL)
    {
        printf("%d\n", (temp->data));
        temp=temp->link;  
    }
}



int main()
{
    node *start1;
    int data, data2; 

    start1 = create2(); 
    traverse(start1); 

    printf("Enter data to insert node after: ");
    scanf("%d", &data);
    insert_after_val(start1, data); 
    traverse(start1);

    // printf("Enter data to delete node after: ");
    // scanf("%d", &data2);
    // int deleted = delete_after_val(start1, data2); 
    // printf("Deleted value is : %d", deleted); 
    // traverse(start1);

    printf("Enter position to insert node at :");
    int position; 
    scanf("%d", &position);

    insert_at_pos(start1, position); 
    traverse(start1);

    

    return 0; 

}