#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  //you may write additional code here
  if (ptr == NULL) return 0;
  int count = 0;
  bool left = false,right = false;
  if (ptr->left != NULL) left = true;
  if (ptr->right != NULL) right = true;
  if ((left && !right) || (!left && right)) count = 1;
  return count + process(ptr->left) + process(ptr->right);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  if (mRoot == NULL) return 0;
  return process(mRoot);
}

#endif
