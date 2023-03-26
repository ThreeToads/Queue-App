#ifndef UNTITLED4_QUEUE_H
#define UNTITLED4_QUEUE_H


#include "iostream"
template <class T>
class Queue{
private:
    T* _data;
    //int memSize, dataCount ;
    size_t _firstIndex;
    size_t _lastIndex;
    size_t _count = 0;
    size_t _size = 0;
    T* _begin;
    T* _end;
public:
    T* Begin(){
        return _begin;
    }
    T* End(){
        return _end;
    }
    Queue();
    Queue(size_t size = 10):_size(size){
        _data = new T[size];
        _firstIndex = 0;
        _lastIndex = 0;
    };

    bool IsEmpty() const{
        return _count == 0;
    };
    bool IsFull() const{
        return _count == _size;
    };
    void Push(const T& t){
        if(IsFull()){
            throw std::range_error("Push_error");
        }
        _data[_lastIndex] = t;
        _lastIndex = (_lastIndex + 1) % _size;
        _count++;

    };
    T Pop(){
        if(IsEmpty()){
            throw std::range_error("error_Pop");
        }
        T firstElem = _data[_firstIndex];
        _firstIndex = (_firstIndex + 1) % _size;
        _count++;
        return firstElem;
    };
    T Top(){
        if (IsEmpty()) throw std::range_error("error");
        return _data[_firstIndex];
    };
    void Print(){
        if(!IsEmpty()){
            int i = _firstIndex;
            do{
                std::cout << _data[i];
                i = (i + 1) % _size;
            }while(i != _lastIndex);
        }
    }

};

/*
template <class T>
void Queue<T>::Push(const T& t) {
    if(IsFull()){
        throw std::range_error("Push_error");
    }
    _data[_lastIndex] = t;
    _lastIndex = (_lastIndex + 1) % _size;
    _count++;
    std::cout<<"dddd";
}*/
/*template <class T>
T Queue<T>::Pop(){
    if(IsEmpty()){
        throw std::range_error("error_Pop");
    }
    T firstElem = _data[_firstIndex];
    _firstIndex = (_firstIndex + 1) % _size;
    _count++;
    return firstElem;
}*/
/*template <class T>
T Queue<T>::Top(){
    if (IsEmpty()) throw std::range_error("error");
    return _data[_firstIndex];
}*/



#endif //UNTITLED4_QUEUE_H