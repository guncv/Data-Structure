#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  check(*this,result,mRoot);
  return result;

  size_t check(CP::map<KeyT,MappedT,CompareT> &val,CP::map<KeyT,MappedT,CompareT> &other, node* &ptr){
    if (ptr == NULL) return 0;
    if (ptr->data.first >= val){
      other[other->data.first] = other->data.second; 
      erase(val->data.first);
    } return check(val,other,ptr->left) + check(val,other,ptr->right);
  }
}

#endif
