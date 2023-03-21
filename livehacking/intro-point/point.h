#pragma once

#include <iostream>

class point
{
public:
    point() : _x{0}, _y{0} {}                  // <--- default ctor
    point(int x, int y) : _x{x}, _y{y} {}      // <--- explicit ctor

    int x() const { return _x; }
    int y() const { return _y; }

    void move(int x, int y);
    bool operator==(const point& rhs) const;
    bool operator!=(const point& rhs) const;

    point& operator+=(const point& vec);

private:
    int _x, _y;
};

std::ostream& operator<<(std::ostream& s, const point& p);
