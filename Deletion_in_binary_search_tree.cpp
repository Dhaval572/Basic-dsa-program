#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Creating a new node
    static Node *createNode(int data) 
    {
        Node *newNode = new Node; 
        newNode->data = data;     
        newNode->left = nullptr;  
        newNode->right = nullptr; 
        return newNode;           
    }

    static void inOrderTraversal(Node *root) 
    {
        if (root != nullptr)
        {
            inOrderTraversal(root->left);
            cout << root->data << ' ';
            inOrderTraversal(root->right);
        }
    }

    static Node *inOrderPredecessor(Node *rootNode)
    {
        Node *current = rootNode->left; 
        while (current && current->right != nullptr)
        {
            current = current->right; 
        }
        return current; 
    }

    static Node *deletionInBST(Node *rootNode, int nodeToDelete) 
    {
        if (rootNode == nullptr) 
        {
            return nullptr;
        }

        // Navigate the tree to find the node to delete
        if (nodeToDelete < rootNode->data) 
        {
            rootNode->left = deletionInBST(rootNode->left, nodeToDelete);
        }
        else if (nodeToDelete > rootNode->data)
        {
            rootNode->right = deletionInBST(rootNode->right, nodeToDelete);
        }
        else // Found the node to delete
        {
            // Node with only one child or no child
            if (rootNode->left == nullptr)
            {
                Node *temp = rootNode->right;
                delete rootNode;
                return temp;
            }
            else if (rootNode->right == nullptr)
            {
                Node *temp = rootNode->left;
                delete rootNode;
                return temp;
            }

            // Node with two children: Get the in-order predecessor (largest in the left subtree)
            Node *iPre = inOrderPredecessor(rootNode);
            rootNode->data = iPre->data; // Replace data with predecessor's data
            rootNode->left = deletionInBST(rootNode->left, iPre->data); // Delete the predecessor
        }

        return rootNode;
    }
};

int main()
{
    Node *rootNode = Node::createNode(27);
    Node *parentNode1 = Node::createNode(25);
    Node *parentNode2 = Node::createNode(30);
    Node *childNode1 = Node::createNode(28);
    Node *childNode2 = Node::createNode(35);
    Node *leafNode1 = Node::createNode(26);
    Node *leafNode2 = Node::createNode(32);

    // Construct the BST
    rootNode->left = parentNode1;
    rootNode->right = parentNode2;
    parentNode1->right = leafNode1;
    parentNode2->left = childNode1;
    parentNode2->right = childNode2;
    childNode2->left = leafNode2;

    cout << "In-order traversal of binary search tree: ";
    Node::inOrderTraversal(rootNode);
    cout << endl;

    rootNode = Node::deletionInBST(rootNode, 30);
    cout << "After deletion, in-order traversal of BST is: ";
    Node::inOrderTraversal(rootNode);
    cout << endl;

    // Clean up remaining nodes (not shown)
    // Ideally, you would implement a function to delete the entire tree to avoid memory leaks.

    return 0;
}
