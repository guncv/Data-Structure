#include <iostream>

bool check(int &mFront, int &mSize, int &mCap, int &last){
    if (mSize > mCap) return false;
    if (mSize == mCap && last != mFront) return false;
    if (last != mFront+mSize) return false;
    if (mFront > mSize) return false;
    return true;
}

int change_mFront(int &mFront, int &mSize, int &mCap, int &last){
    mFront = last - mSize;
    return mFront;
}

int change_mSize(int &mFront, int &mSize, int &mCap, int &last){
    mSize = last - mFront;
    return mSize;
}

int change_mCap(int &mFront, int &mSize, int &mCap, int &last){
    mCap = last+1;
    return mCap;
}

int change_last(int &mFront, int &mSize, int &mCap, int &last){
    last = (mFront+mSize)%mCap;
    return last;
}

int main(){
    int n, mFront, mSize, mCap, last, correction;
    std::cin >> n;
    while(n--){
        std::cin >> mFront >> mSize >> mCap >> last >> correction;
        switch(correction){
            case 0 :
                if(check(mFront,mSize,mCap,last)) std::cout << "OK\n";
                else {std::cout << "WRONG\n";}
                break;
            case 1 :
                if(check(mFront,mSize,mCap,last)) std::cout << "OK\n";
                else {
                    std::cout << "WRONG ";
                    std::cout << change_mFront(mFront,mSize,mCap,last) << "\n";
                } break;
            case 2 :
                if(check(mFront,mSize,mCap,last)) std::cout << "OK\n";
                else {
                    std::cout << "WRONG ";
                    std::cout << change_mSize(mFront,mSize,mCap,last) << "\n";
                } break;
            case 3 :
                if(check(mFront,mSize,mCap,last)) std::cout << "OK\n";
                else {
                    std::cout << "WRONG ";
                    std::cout << change_mCap(mFront,mSize,mCap,last) << "\n";
                } break;
            case 4 :
                if(check(mFront,mSize,mCap,last)) std::cout << "OK\n";
                else {
                    std::cout << "WRONG ";
                    std::cout << change_last(mFront,mSize,mCap,last) << "\n";
                } break;
        }
    }
}