# Preorder Binary Search Tree
11/2023

In this assignment you will read numbers from an input file, store them in a BST,
and perform preorder traversal on the BST.

## Reading from Input:
● The input file will contain a single line of numbers separated by spaces.

● The input file will never be empty

● There will always be at least 1 number in the input file

● There will never be more than 100 numbers in the input file

● You should insert the numbers into the BST starting from the first number in the input file. For
example, if the input file contains: 4 2 5 1 you should input 4 into the BST first, then 2, then 5,
and then lastly 1

## Performing Preorder Traversal:

● Your preorder traversal should show each node’s value and “location” in the BST

● The format should be: [location] value

● The location should be enclosed in square brackets [ ]

● There should be a single space between the closing square bracket and the value

● Each node should be printed on its own line

● The location means where the node is in reference to the root node

● The symbols to show location will be x, l, and r:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;○ x - represents the root

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;○ l - represents going to the left

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;○ r - represents going to the right

● For example, if the BST is
<img width="536" height="298" alt="image" src="https://github.com/user-attachments/assets/2162d67a-6b29-4f7a-b379-1b4bec8e8511" />


&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;○ 3’s location would be [x] since it is the root

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;○ 1’s location would be [xl] since you start from the root, then go to the left

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;○ 2’s location would be [xlr] since you start from the root, then go to the left, then go to
the right

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;○ 4’s location would be [xr] since you start from the root, then go to the right
#
input1.txt

9 6 3 2 5 4 1
#
ans1.txt

[x] 9

[xl] 6

[xll] 3

[xlll] 2

[xllll] 1

[xllr] 5

[xllrl] 4
