// Components of tree data structure

/*( Note: copy all the text into vs code to look perfect diagram otherwise it will become difficult to understand )*/

/*

Diagram: 

	    A (Depth 0)
       / \
      B   C (Depth 1)
     / \   \
    D   E   F (Depth 2)
   /
  G 	(Depth 3)

1. Node:

	A node is the fundamental part of a tree that contains data and may link to other nodes.

	Example: In our diagram, A, B, C, D, E, F, and G are all nodes.

2. Root:

	The root is the topmost node of the tree

	Example: In the diagram, A is the root.

3. Edge:

	An edge is the connection between two nodes.

	Example: The lines connecting A to B and C, B to D and E, C to F are edges.
	( look at diagram to perfectly understand )

4. Child:

	A child is a node directly connected to another node when moving away from the root.

	Example: B and C are children of A; D and E are children of B; F is a child of C.

5. Parent:

	A parent is a node that has one or more children (child nodes).

	Example: A is the parent of B and C; B is the parent of D and E; C is the parent of F; D is the parent of G.

6. Leaf:

	A leaf is a node that has no children. It represents the end of a path in the tree.

	Example: D, E, F, and G are all leaves since they do not have any children.

7. Height:

	The height of a tree is the length of the longest path from the root to a leaf. It’s measured in edges.

	Example: The height of this tree is 3 (from A to G).

8. Depth:

	The depth of a node is the number of edges from the root to that node.

	Example:

		Depth of A = 0
		Depth of B = 1
		Depth of C = 1
		Depth of D = 2
		Depth of E = 2
		Depth of F = 2
		Depth of G = 3

	So, that all are components of tree data structure.

	I hope you understand!!
	
*/
