#include <stdio.h>
#include <stdlib.h>

typedef struct DLLnode
{
    int data;
    struct DLLnode *next, *back;
}DLLnode;

DLLnode* create2()
{
    DLLnode *start, *curr, *temp; 
    int data;
    printf("Enter data into the doubly linked list. Enter -1 to terminate the list.");
    scanf("%d", &data);

    if(data == -1)
    {
        start = NULL; 
        return start; 
    }

    start = (DLLnode*)malloc(sizeof(DLLnode));
    start-> data = data; 
    start -> back = NULL;
    curr = start; 

    while((curr->data) != -1)
    {
        temp = (DLLnode*)malloc(sizeof(DLLnode));
        if(temp==NULL)
        {
            printf("Memory allocation failed!");
            exit(1);
        }
        
        printf("Enter data into the doubly linked list. Enter -1 to terminate the list.");
        scanf("%d", &(temp->data)); 

        if((temp->data)==-1)   break; 

        curr -> next = temp;
        temp -> back = curr; 
        curr = temp; 
   }

   curr -> next = NULL; 
   return start;
}

void traverse_forward(DLLnode* start)
{
    if(start == NULL)
    {
        printf("Empty list!");
    }

    DLLnode *temp = start;

    while(temp != NULL)
    {
        printf("%d\n", (temp->data)); 
        temp = temp->next;
    }
}

void traverse_backward(DLLnode* start)
{
    if(start==NULL)
    {
        printf("Empty List!");
    }

    DLLnode* curr = start;

    while((curr->next)!= NULL)
    {
        curr = curr-> next ; 
    }

    while(curr!=NULL)
    {
        printf("%d\n", (curr->data));
        curr = curr-> back; 
    }
}

DLLnode* insert_after_val(DLLnode* start, int val)
{
    DLLnode *temp, *curr = start;
    if(start==NULL)
    {
        printf("Empty list!");
        return start; 
    }

    while (curr!=NULL)
    {
        if((curr->data)==val)
        {
            DLLnode* temp = (DLLnode*)malloc(sizeof(DLLnode));

            printf("Enter data in the node :");
            scanf("%d", &(temp->data));

            temp->next = curr->next; 
            temp->back = curr;

            curr->next = temp; 

            //if temp is the last inserted node
            if((temp->next)!=NULL)
            {
            (temp->next)->back = temp; 
            }
            break; 
        }
        curr = curr->next;
    }

    if(temp==NULL)
    {
        printf("Data not present in the list!");
        return start; 
    }

    return start;
}

int delete_after_val(DLLnode* start, int val)
{
    DLLnode *curr, *temp;
    curr = start;  

    if(start==NULL)
    {
        printf("Empty list!");
        return -1;  
    }

    while(curr!=NULL)
    {
        if(curr->data == val)
        {
            temp = curr-> next;
            int data = temp->data; 

            curr->next = temp->next;
            
            if(temp->next != NULL)            
                temp-> next -> back = curr; 

            free(temp);

            return data; 
        }
        curr = curr->next;
    }

    if(curr==NULL)   
       return -1; 

}

void insert_before_val(DLLnode **start, int val)
{
    DLLnode *temp, *curr; 
    curr = *start;

    while((curr->data != val) && curr!=NULL)
    {
        curr = curr-> next; 
    } 
    
    if(curr==NULL)
    {
        printf("Data not found in the list!");
        exit(1); 
    }

    printf("Enter data to be inserted before %d :", val); 
    int data;
    scanf("%d", &data); 
    temp = (DLLnode*)malloc(sizeof(DLLnode));
    temp->data = data; 
    temp -> next = curr; 

    if(curr==*start)
    {
        temp->back = NULL; 
        *start = temp; 
    }
    else
    {
        temp->back = curr->back;
        temp->back->next = temp; 
    }
    curr->back = temp; 
}


int main()
{
    printf("Doubly Linked List\n");
    // DLLnode* start = create2();
    // traverse_forward(start);
    // // traverse_backward(start); 

    // insert_after_val(start, 2);
    // traverse_forward(start); 
    // int result = delete_after_val(start, 2); 
    // printf("Deleted value is %d.\n", result); 
    // traverse_forward(start);

    DLLnode* start2 = create2();  
    insert_before_val(&start2, 2); 
    traverse_forward(start2); 

    return 0; 
}