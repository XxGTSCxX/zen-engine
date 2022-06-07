#pragma once

namespace zen::math
{

    using real = float;

    static constexpr real pi = static_cast<real>(3.14159265358979323846l);

    class degree;

    class radian
    {
    public:
        constexpr               radian(             ) = default;
        constexpr   explicit    radian(real     rad ) : m_value{ rad } {}
                                radian(degree   deg );

        radian& operator+=  (radian   other       );
        radian& operator-=  (radian   other       );
        radian& operator/=  (real     denominator );
        radian& operator*=  (real     multiple    );

        operator real() const;

    private:
        real m_value{};
    };

    class degree
    {
    public:
        constexpr               degree(             ) = default;
        constexpr   explicit    degree(real     deg ) : m_value{ deg } {}
                                degree(radian   rad );

        degree& operator+=  (degree   other       );
        degree& operator-=  (degree   other       );
        degree& operator/=  (real     denominator );
        degree& operator*=  (real     multiple    );

        operator real() const;

    private:
        real m_value{};
    };
}
