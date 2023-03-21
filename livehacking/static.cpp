class point
{
public:
    point(int x, int y) : _x{x}, _y{y} {}      // <--- explicit ctor
private:
    int _x, _y;
};

int i_global = 666;
//point p_global_static(1,2);

static void foo()
{
    static int i_local_static = 666;
    static point p_local_static(1,2);

    (void)i_local_static;
    (void)p_local_static;
}

extern void bar();

int main()
{
    bar();
    foo();
    return 0;
}
