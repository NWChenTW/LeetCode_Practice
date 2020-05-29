class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root)  return 0;
        return max(maxDepth(root -> left)+1, maxDepth(root -> right) +1 );
    }
};

/*
we can break down the return statement to more readable code as follows:

if(root == NULL) return 0;
else{
return (1 + max(maxDepth(root --> left), maxDepth(root -> right))) ;
}

maxDepth(root -> left) just call maxDepth on the left child of the root node.

so for example if our tree looks like this: root: Node[0] has 2 children, Node[1] and Node[2]. and Node[2] has right child Node[3]
our first return will look like this return 1 + max(maxDepth(Node[1]), maxDepth(Node[2]));
we know maxDepth(Node[1]) = 0 because there are no children so when the program calls for maxDepth(Node[1] -> left) and maxDepth(Node[1] -> right) both those will return 0.

as for maxDepth(Node[2]) it will return 1 because Node[2] has 1 right child and to put it all together the recursion looks like this:
1 + max(maxDepth[Node[0 -> left], maxDepth(Node[0] -> right))
=>
1 + max(max(0,0), 1 + max(maxDepth(Node[1] - > left), maxDepth(Node[1] -> right)))
=>
1 + max(max(0,0), 1 + max(max(0,0), max(max(0,0),max(0,0))))
=>
1+max(0,1 + max(0,0))
=>1 + max(0,1)
=> 2