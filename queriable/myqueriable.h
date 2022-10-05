#pragma once

#include <vector>
#include <list>
using namespace std;

template <class T0> class MyQueriable
{
private:
    vector<T0> vec;
public:
	MyQueriable() = default;
	MyQueriable(vector<T0> v) : vec(v){}
	~MyQueriable(){}

    int size(){return vec.size();};
    T0& operator[] (int n)
    {
        return vec[n];
    }

    template <class T1> MyQueriable<T0> where(T1 func)
    {
        MyQueriable<T0> mq;
        int s = this->size();
        for(int i = 0; i < s; i++)
        {
            if(func(vec[i]))
                mq.vec.push_back(vec[i]);   
        }
        return mq; 
    }

	template <class T1> MyQueriable<T0> apply(T1 func)
	{
		MyQueriable<T0> mq;
        int s = this->size();
        for(int i = 0; i < s; i++)
            mq.vec.push_back(func(vec[i]));   
        return mq; 
	}

	T0 sum()
	{
		T0 s = 0;
		int l = this->size();
		for(int i = 0; i < l; i++)
			s += vec[i];
		return s;	
	}
};

template <class T>
MyQueriable<T> from(vector<T> v)
{
	MyQueriable<T> mq(v);
	return mq;
} 

template <class T>
MyQueriable<T> from(list<T> l)
{
	vector<T> v;
	for(auto it = l.begin(); it != l.end(); it++)
		v.push_back(*it);
	MyQueriable<T> mq(v);
	return mq;	
}
