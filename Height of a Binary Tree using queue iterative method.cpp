 int height(Node* root)
    {
        // Write your code here.
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        else
        {
            queue<Node *> q;
            q.push(root);
            int ht (0);
            while(1)
            {
                int sz = q.size();
                if(sz == 0)
                {
                    return ht;
                }
                ht++;
                while(sz--)
                {
                    Node *node = q.front();
                    q.top();
                    if(node->left)
                    {
                        q.push(node->left);
                    }
                    if(node->right)
                    {
                        q.push(node->right);
                    }
                }
            }
        }
    }
