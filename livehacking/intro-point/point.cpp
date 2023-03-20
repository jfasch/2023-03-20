#include "point.h"


void point::move(int x, int y)
{
    this->_x += x;
    this->_y += y;
}

bool point::operator==(const point& rhs) const
{
    return
        x() == rhs.x() &&
        y() == rhs.y();
}

bool point::operator!=(const point& rhs) const
{
    return ! operator==(rhs);
}

std::ostream& operator<<(std::ostream& s, const point& p)
{
    s << '(' << p.x() << ',' << p.y() << ')';
    return s;
}
