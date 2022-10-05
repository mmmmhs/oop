#include "Vector.h"
#include "Node.h"
using namespace std;

Vector::Vector(int n){
    capacity = n;
    len = 0;
    array = new Node[n];
}
Vector::~Vector(){
    delete[] array;
}

Vector::Vector(const Vector & other)     
{
    array = new Node[other.capacity];
    capacity = other.capacity;
    len = other.len;
    int i = len;
    while(i--)
        array[i] = other.array[i];
}
Vector::Vector(Vector && other) : array(other.array)
{
    capacity = other.capacity;
    len = other.len;
    other.array = nullptr;
    other.len = 0;
    other.capacity = 0;
}

Vector& Vector::operator=(const Vector & other)
{
    if(this != &other)
    {
        for(int i = 0; i < capacity; i++)
            array[i].~Node();
        array = new Node[other.capacity];
        capacity = other.capacity;
        len = other.len;
        int i = len;
        while(i--)
            array[i] = other.array[i];  
    }
    return *this;
}
Vector& Vector::operator=(Vector && other){
    if(this != &other)
    {
        for(int i = 0; i < capacity; i++)
            array[i].~Node();
        capacity = other.capacity;
        len = other.len;
        this->array = other.array;
        other.len = 0;
        other.array = nullptr;
        other.capacity = 0;
    }
    return *this;
}
Node& Vector::operator [] (int pos)
{
    return array[pos];
}

void Vector::append(int value)
{
    array[len] = Node(value);
    len++;
}
void Vector::insert(int pos, int value)
{
    for(int i = len; i > pos; i--)
        array[i] = move(array[i - 1]);
    array[pos] = move(Node(value));
    len++;
}
void Vector::swap(int pos1, int pos2)
{
    Node tmp(move(array[pos1]));
    array[pos1] = move(array[pos2]);
    array[pos2] = move(tmp);
}

void Vector::dilatation()
{
    Vector neo(2 * capacity);
    neo.len = len;
    for(int i = 0; i < len; i++)
        neo.array[i] = move(array[i]);
    *this = move(neo);     
}

int Vector::getlen(){
    return len;
}