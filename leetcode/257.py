def binaryTreePaths(root):
    if root == None:
        return [] 

    if root.left == None and root.right == None:
        return [str(root.val)] 

    tmp = []
    if root.left :
        tmp.extend(binaryTreePaths(root.left))
    if root.right :
        tmp.extend(binaryTreePaths(root.right))

    results = []
    for i in tmp :
        result = str(root.val) + '->' + i
        results.append(result)

    return results

