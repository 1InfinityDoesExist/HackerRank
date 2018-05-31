
void topView(node * root) {
    if(root == NULL)
    {
        return;
    }
    stack<int> st;
    struct node *ptr = root;
    while(ptr)
    {
        st.push(ptr->data);
        ptr = ptr->left;
    }
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    root = root->right;
    while(root)
    {
        cout << root->data << " ";
        root = root->right;
    }
    return;
}
