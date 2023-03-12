#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  node* n = mHeader;
  node* n_check = mHeader->next;
  for (size_t i = 0 ; i < mSize ; i++){
    if (n_check == NULL) return false;
    if (n_check->prev == NULL || n_check->prev != n) return false;
    n = n->next;
    n_check = n_check->next;
  } if (n_check == NULL || n_check != mHeader) return false;
  if (mHeader->prev == NULL || mHeader->prev != n) return false;
  return true;
}


#endif
