#ifndef FUNCTIONPOINTER_H
#define FUNCTIONPOINTER_H


class FunctionPointer {
    public:
        FunctionPointer();
    private:
        void test(int a=5);
        void test2();
        void (FunctionPointer::*myFunc)();
        void pointerArgs(void (FunctionPointer::*func)(int),int count);
};

typedef void (FunctionPointer::*PtrFunc)(int);


#endif // FUNCTIONPOINTER_H