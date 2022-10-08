public class LeftView {
    class Node {
    int data;
    Node left, right;
 
    public Node(int item)
    {
        data = item;
        left = right = null;
    }
}
 
class BinaryTree {
    Node root;
    static int max_level = 0;
 
    void leftViewUtil(Node node, int level)
    {
        if (node == null)
            return;
 
        if (max_level < level) {
            System.out.print(" " + node.data);
            max_level = level;
        }
 
        leftViewUtil(node.left, level + 1);
        leftViewUtil(node.right, level + 1);
    }
 
    void leftView()
    {
          max_level = 0;
        leftViewUtil(root, 1);
    }
 
    public static void main(String args[])
    {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(10);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(7);
        tree.root.left.right = new Node(8);
        tree.root.right.right = new Node(15);
        tree.root.right.left = new Node(12);
        tree.root.right.right.left = new Node(14);
           
       
 
        tree.leftView();
    }
}
}