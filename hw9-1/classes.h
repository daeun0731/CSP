class A {
    public:
        virtual void test();
};

class B:public A {
    public:
        void test();
};

class C:public A {
    public:
        void test();
};
