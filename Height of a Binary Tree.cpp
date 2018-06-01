
/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return 0;
        }
        else
        {

            int leftHeight;
            int rightHeight;
            struct Node *ptr = root;
            leftHeight = height(ptr->left);
            rightHeight = height(ptr->right);

            if(leftHeight > rightHeight)
            {
                return leftHeight+1;
            }
            else
            {
                return rightHeight+1;
            }
        }
    }
