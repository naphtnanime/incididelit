class Interface {
    virtual HRESULT Method1() = 0;
    virtual HRESULT Method2() = 0;
};

class Implementation : public Interface {
    virtual HRESULT Method1();
    HRESULT Method2();
};
