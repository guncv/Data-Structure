void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    size_t sizeH;
    if (mSize % 2 != 0) sizeH = mSize/2 + 1;
    else {sizeH = mSize/2;}
    auto it = begin();
    list1.mSize += sizeH; list2.mSize += mSize - sizeH;
    while(sizeH--){ 
        it++;
    } 
    if (mSize != 0){
        list1.mHeader->prev->next = mHeader->next;
        mHeader->next->prev = list1.mHeader->prev;
        it.ptr->prev->next = list1.mHeader;
        list1.mHeader->prev = it.ptr->prev;
    } if (it != end()){      
        list2.mHeader->prev->next = it.ptr;
        it.ptr->prev = list2.mHeader->prev;
        list2.mHeader->prev = mHeader->prev;
        mHeader->prev->next = list2.mHeader;
    }
    mSize = 0;
    mHeader->prev = mHeader;
    mHeader->next = mHeader;
}


