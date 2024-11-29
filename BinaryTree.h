// Specification file for the BinaryTree class
#ifndef BINARYTREE_H
#define BINARYTREE_H
using namespace std;

// The BinaryTree class manages a binary tree of integers.
class BinaryTree {
private:
   // TreeNode is a private structure for BinaryTree nodes.
   struct TreeNode {
      string value;         // The value in the node
      TreeNode *left;    // Pointer to left child node
      TreeNode *right;   // Pointer to right child node
   };

   // root points to the topmost node of the tree.
   TreeNode *root;      

   // Private member functions for internal operations.
   void insert(TreeNode *&, TreeNode *&);
   void destroySubTree(TreeNode *);
   void deleteNode(string, TreeNode *&);
   void makeDeletion(TreeNode *&);
   void displayInOrder(TreeNode *) const;
   void displayPreOrder(TreeNode *) const;
   void displayPostOrder(TreeNode *) const;

public:
   // Constructor initializes the root to nullptr, indicating an empty tree.
   BinaryTree()     { root = nullptr; }

   // Destructor deallocates all nodes in the tree.
   ~BinaryTree()    { destroySubTree(root); }

   // Public interface for inserting, searching, and removing nodes.
   void insertNode(string);
   bool searchNode(string);
   void remove(string);

   // Public wrappers for tree traversal functions.
   void displayInOrder() const     {  displayInOrder(root); }
   void displayPreOrder() const    {  displayPreOrder(root); }
   void displayPostOrder() const   {  displayPostOrder(root); }
};

#endif // BINARYTREE_H
