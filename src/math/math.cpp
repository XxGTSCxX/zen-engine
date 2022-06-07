#include <math/math.hpp>

namespace zen::math
{

static constexpr real DEG_TO_RAD = static_cast<real>(pi    / 180.0);
static constexpr real RAD_TO_DEG = static_cast<real>(180.0 / pi   );

radian::radian(degree deg)
: m_value{ static_cast<real>(deg) * DEG_TO_RAD }
{}

radian& radian::operator+=(radian other)
{
    m_value += other.m_value;
    return *this;
}

radian& radian::operator-=(radian other)
{
    m_value -= other.m_value;
    return *this;
}

radian& radian::operator/=(real denominator)
{
    m_value /= denominator;
    return *this;
}

radian& radian::operator*=(real multiple)
{
    m_value *= multiple;
    return *this;
}

radian::operator real() const
{
    return m_value;
}

degree::degree(radian rad)
: m_value{ static_cast<real>(rad) * RAD_TO_DEG }
{}

degree& degree::operator+=(degree other)
{
    m_value += other.m_value;
    return *this;
}

degree& degree::operator-=(degree other)
{
    m_value -= other.m_value;
    return *this;
}

degree& degree::operator/=(real denominator)
{
    m_value /= denominator;
    return *this;
}

degree& degree::operator*=(real multiple)
{
    m_value *= multiple;
    return *this;
}

degree::operator real() const
{
    return m_value;
}

}  // namespace zen::math
