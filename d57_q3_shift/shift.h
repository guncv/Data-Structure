void shift(int k) {
	// TODO: Add your code here
	if (k > 0) {
		k = k%mSize;
		if (k != 0){
			auto it = begin();
			while(k--) it++;
			mHeader->prev->next = mHeader->next;
			mHeader->next->prev  = mHeader->prev;
			mHeader->prev = it.ptr->prev;
			it.ptr->prev->next = mHeader;
			mHeader->next = it.ptr;
			it.ptr->prev = mHeader;
		}
	} else if (k < 0){
		k *= -1;
		k = k%mSize;
		if (k != 0){
			auto it = end();
			while(k--) it--;
			mHeader->prev->next = mHeader->next;
			mHeader->next->prev = mHeader->prev;
			it.ptr->prev->next = mHeader;
			mHeader->prev = it.ptr->prev;
			mHeader->next = it.ptr;
			it.ptr->prev = mHeader;
		}
	}
}
