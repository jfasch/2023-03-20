#pragma once

constexpr int random_integer()
{
    return 666;
}

class point
{
public:
    constexpr point(int x, int y) : _x(x), _y(y) {}

    int x() const;
    int y() const;
private:
    int _x, _y;
};

