if(start->data==NULL)
    {
        printf("UNDERFLOW\n");
    }
        else if(start->prev==NULL&&start->next==NULL)
        {
            ptr=start;
            printf("THE DELETED ELEMENT IS %d",ptr->data);
            start->data=NULL;
            start->prev=NULL;
            start->next=NULL;
            free(ptr);
        }'
