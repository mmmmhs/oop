#ifndef __EXAMPLE__
#define __EXAMPLE__

class Example {

private:

    int data;
    int num;
    static int cnt;//(1)

public:

    Example(int data);
    void getData();
    ~Example();
};

#endif