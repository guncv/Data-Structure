#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if (n == NULL) return 0;
  return 1 + process(n->left) + process(n->right);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if (mRoot == NULL) return std::pair<KeyT,MappedT>();
  if (mRoot->left != NULL){
    left.mRoot = mRoot->left;
    left.mSize = process(mRoot->left);
    mRoot->left = NULL;
    left.mRoot->parent = NULL;
    mSize -= left.mSize;
  }
  if (mRoot->right != NULL){
    right.mRoot = mRoot->right;
    right.mSize = process(mRoot->right);
    mRoot->right = NULL;
    right.mRoot->parent = NULL;
    mSize -= right.mSize;
  } return mRoot->data;
}

#endif

