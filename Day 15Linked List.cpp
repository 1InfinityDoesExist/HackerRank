      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node *temp = (Node *)malloc(sizeof(Node));
          temp->data = data;
          temp->next = NULL;
          if(head == NULL)
          {
              head = temp;
          }
          else
          {
              Node *ptr = head;
              while(ptr->next != NULL)
              {
                  ptr = ptr->next;
              }
              ptr->next = temp;
          }
          return head;
      }
